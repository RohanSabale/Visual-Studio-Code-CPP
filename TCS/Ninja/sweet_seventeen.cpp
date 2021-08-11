#include<bits/stdc++.h>
using namespace std;

int main()
{
    char hex[17];
    long long decimal;
    int val,len;
    decimal = 0;
    cin>>hex;
    len = strlen(hex);
    len--;

    for(int i =0;hex[i] !='\0' ;i++)
    {
        if(hex[i] >= '0' && hex[i] <='9')
        {
            val = hex[i] - 48;
        }
        else if(hex[i] >= 'a' && hex[i] <='g')
        {
            val = hex[i] - 97 +10;
        }
        else if(hex[i] >='A' && hex[i] <='G')
        {
            val  = hex[i] -65 + 10;
        }
        decimal =decimal + val * pow(17 , len);
        len--;
    }
    cout<<decimal;
    return 0;
}