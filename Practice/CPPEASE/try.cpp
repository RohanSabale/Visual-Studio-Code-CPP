#include<bits/stdc++.h>
using namespace std;



int binary_decimal(int n)
{
    int num=n;
    int dec_value=0;
    int base=1;
    int temp=num;
    while(temp){
        int last_digit =temp %10;
        temp =temp /10;
        dec_value +=last_digit *base;
        base =base *2;
    }
    return dec_value;
}




int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n==4)
        {
            int x=0;
            x=stoi(s, 0 , 2);
            cout<<x;
            //cout<<binary_decimal(x)<<endl;
        }
        if(n==8)
        {
            string r= s.substr(0,4);
            int x=0;
            x=stoi(r,0,2);
            cout<<x<<endl;

            string q= s.substr(4,8);
            int y=0;
            y=stoi(q,0,2);
            cout<<y<<endl;
            
        }

        if(n==12)
        {
            string r= s.substr(0,4);
            int x=0;
            x=stoi(r,0,2);
            cout<<x<<endl;

            

            string t= s.substr(4,8);
            int z=0;
            z=stoi(t,0,2);
            cout<<z<<endl;
            
        }

       

        
    }
}