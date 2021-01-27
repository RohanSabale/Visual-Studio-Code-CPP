/*Chef is planning to setup a secure password for his Codechef account. For a password to be secure the following conditions should be satisfied:

1) Password must contain at least one lower case letter [a−z]

;

2) Password must contain at least one upper case letter [A−Z]

strictly inside, i.e. not as the first or the last character;

3) Password must contain at least one digit [0−9]

strictly inside;

4) Password must contain at least one special character from the set {
'@', '#', '%', '&', '?' }

strictly inside;

5) Password must be at least 10

characters in length, but it can be longer.

Chef has generated several strings and now wants you to check whether the passwords are secure based on the above criteria. Please help Chef in doing so.
Input

    First line will contain T

, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, string S

    .

Output

For each testcase, output in a single line "YES" if the password is secure and "NO" if it is not.
Constraints

    1≤|S|≤20

All the characters in S
are one of the following: lower case letters [a−z], upper case letters [A−Z], digits [0−9], special characters from the set { '@', '#', '%', '&', '?' }
Sum of length of strings over all tests is atmost 106

Example Input

3
#cookOff#P1
U@code4CHEFINA
gR3@tPWD

Example Output

NO
YES
NO

Explanation

Example case 1: Condition 3

is not satisfied, because the only digit is not strictly inside.

Example case 2: All conditions are satisfied.

Example case 3: Condition 5
is not satisfied, because the length of this string is 8.

*/

#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int L=0,U=0,N=0,S = 0;
       // bool ans =false;
       bool a=false , b=false , c= false, d=false;
        if(s.size() >=10)
        {

            for (int i=0;i<s.size() ;i++)
            {
                if(islower(s[i]))            //if(s[i]>='a' && s[i]<='z') -> can also be used
                {
                    a=true; 
                }
                if(i>0 &&  i!=s.size() -1)
                {
                if(isupper(s[i]))            //if(s[i]>='A' && s[i]<='Z') -> can also be used
                {
                    b= true;
                }
                if(isdigit(s[i]))       // if(s[i]>='0'   && s[i] <='9)  -> can also be used this counts the number of numericals
                 {  
                    c= true;
                }
                if(s[i] =='@' || s[i] =='%' || s[i] =='#' || s[i] =='&' || s[i] =='?')
                {
                    d= true;
                }
                }
                
            }
        }
        if (a== true && b== true && c== true && d== true)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
          
    }   
    return 0;
}
