#include<bits/stdc++.h>
using namespace std;

bool ispalRec(char str[] , int s, int e)
{
    if(s==e)    // only one character
        return true;

    if(str[s] != str[e])    // first and last character does not match
        return false;

    if(s<e+1)
        return ispalRec(str , s+1 , e-1);

    return true;
}


bool ispalindrome(char str[])
{
    int n = strlen(str);

    // empty string is also considered as palindrome
    if(n==0)
    {
        return true;
    }
    return ispalRec(str , 0 ,n-1);

}


int main()
{
   
    
    char str[] = "aabaa";
    
    if(ispalindrome(str))
        cout<<"Yes";
    else
        cout<<"No";
    
    return 0;
    
    
}