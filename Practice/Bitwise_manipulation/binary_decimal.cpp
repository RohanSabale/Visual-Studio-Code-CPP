#include<bits/stdc++.h>
using namespace std;

int binary_decimal(string n)
{
    string num =n;
    int dec_value =0;

    int base =1;

    int len = num.length();
    for(int i=len - 1;i>=0;i--)
    {
        if (num[i] =='1')
        {
            dec_value +=base;
            base = base *2;
        }
    }
    return dec_value;
}
int main()
{
    string num = "0001";
    cout<<binary_decimal(num)<<endl;
    cout<<stoi(num , 0 , 2);                   // using predifened funciton
}