#include<bits/stdc++.h>
using namespace std;

// void reverse(int a)
// {
//     int rev = 0;
//     while(a !=0)
//     {
//         rev = rev*10 + a%10;
//         a  = a/10;
//     }
//     cout<<rev;
// }

void reverse(int a) 
{
    string str = to_string(a);
    reverse(str.begin() , str.end());
    a = stoi(str);
    cout<<a;
}


int main()
{
    int a;
    a = 12345;
    reverse(a);
    return 0;
}