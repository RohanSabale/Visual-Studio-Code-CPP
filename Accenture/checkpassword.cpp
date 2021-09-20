#include<bits/stdc++.h>
using namespace std;

int checkPassword(char str[] , int n , int min)
{
    if(n<min)         // min length
    {
        return 0;
    }
    if(str[0]-'0' >=0 && str[0]-'0'<=9)     // atleast one numeric digit
    {
        return 0;
    }

    int a= 0,cap=0,num =0;
    while(a<n)
    {
        if(str[a]==' '|| str[a] =='+')      //must not contain space and '+'
        {
            return 0;
        }
        if(str[a]>=65 && str[a]<=90)    // capital letter
        {
            cap++;
        }
        else if(str[a]-'0' >=0 && str[a]-'0' <=9)   // numeric digits
        {
            num++;
        }
        a++;
    }
    return cap>0 && num>0;
}

int main()
{
    int min;
    string s;
    getline(cin,s);

    int len = s.size();
    char *c = &s[0];
    cin>>min;

    if(checkPassword(c,len,min))
    {
        cout<<"valid";
    }
    else
    {
        cout<<"invalid";
    }

}