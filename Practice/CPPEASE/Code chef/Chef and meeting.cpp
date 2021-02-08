/*
A time is a string in the format "HH:MM AM" or "HH:MM PM" (without quotes), where HH and MM are always two-digit numbers. A day starts at 12:00 AM and ends at 11:59 PM. You may refer here for understanding the 12-hour clock format.

Chef has scheduled a meeting with his friends at a time P
. He has N friends (numbered 1 through N); for each valid i, the i-th friend is available from a time Li to a time Ri (both inclusive). For each friend, can you help Chef find out if this friend will be able to attend the meeting? More formally, check if Li≤P≤Ri for each valid i

.
Input

    The first line of the input contains a single integer T

denoting the number of test cases. The description of T
test cases follows.
The first line of each test case contains a single time P
.
The second line contains a single integer N
.
N
lines follow. For each valid i, the i-th of these lines contains two space-separated times Li and Ri

    .

Output

For each test case, print a single line containing one string with length N
. For each valid i, the i-th character of this string should be '1' if i

-th friend will be able to attend the meeting or '0' otherwise.
Constraints

    1≤T≤500

1≤N≤500
each time is valid in the 12-hour clock format
for each valid i
, the time Ri is greater or equal to Li

Subtasks

Subtask #1 (100 points): original constraints
Example Input

2
12:01 AM
4
12:00 AM 11:42 PM
12:01 AM 11:59 AM
12:30 AM 12:00 PM
11:59 AM 11:59 PM
04:12 PM
5
12:00 AM 11:59 PM
01:00 PM 04:12 PM
04:12 PM 04:12 PM
04:12 AM 04:12 AM
12:00 PM 11:59 PM

Example Output

1100
11101

Explanation

Example case 1:

    Friend 1

: 12:01 AM lies between 12:00 AM and 11:42 PM (that is, between 00:00 and 23:42 in the 24-hour clock format), so this friend will be able to attend the meeting.
Friend 2
: 12:01 AM lies between 12:01 AM and 11:59 AM (between 00:01 and 11:59 in the 24-hour clock format).
Friend 3
: 12:01 AM does not lie between 12:30 AM and 12:30 PM (between 00:30 and 12:30 in the 24-hour clock format), so this friend will not be able to attend the meeting.
Friend 4

    : 12:01 AM does not lie between 11:59 AM and 11:59 PM (between 11:59 and 23:59 in the 24-hour clock format).

Example case 2: For friend 3
, 04:12 PM lies between 04:12 PM and 04:12 PM (inclusive) and hence this friend will be able to attend the meeting.



*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main_time(string p)
{
    //vector<int>str;
    string str = "";

    // get hours
    int h1 =(int) p[1] - '0';
    int h2 = (int) p[0] -'0';
    int hh = (h2 *10 + h1 %10);

    // conversion for first string
    if(p[6] =='A')
    {
        if(hh==12)
        {
            str+="00";
        
            for(int i=3;i<=4;i++)
            {
                str+=p[i];
            }
        }
        else
        {
            for(int i=0;i<=4;i++)
            {
                if(i!=2)
                    str+=p[i];
            }    
        }
    }
    else
    {
        if (hh==12)
        {
            str+="12";
            for(int i=3;i<=4;i++)
               str+=p[i];   
        }
        else
        {
            hh = hh + 12;
            
            stringstream geek;
            geek << hh;
            string a;
            geek >> a;
            str+=a;
            for(int i=3;i<=4;i++)
               str+=p[i];     
        }
    }
    int ans;
    stringstream geek;
    geek << str;
    geek >> ans;
    return ans; 
}


void solve()
{
    string p;
    int p1;           // main time
    //p="01:59 AM";
    getline(cin,p);
    p1=main_time(p);
    //cout<<p1<<endl;
    //cout<<p1;
    int n;              // no of friends
    cin>>n;
    string s;
    getline(cin,s);
    //n=1;
    while(n--)
    {
        string s;
        string ans ="";                              // main ans to be printed
      // s="07:00 PM 07:10 PM";
        int first_int, second_int;       
        getline(cin,s);
        first_int=main_time(s);
        second_int=main_time(s.substr(9,17));
        //cout<<first_int<<" "<<second_int<<"\n";
        //cout<<p1;
        if(first_int<=p1 &&  p1 <=second_int)
        {
            cout<<"1";
            //ans+='1';
        }
        else
        {
            cout<<"0";   
        }     
    }
     cout<<endl;
}

int main()
{
    int t;            //no of test cases
    cin>>t;
    //t=1;
    string temp;
    getline(cin,temp);
    while(t--)
    {
        solve();
    }
    return 0;
}