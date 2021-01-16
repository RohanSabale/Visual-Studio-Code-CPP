#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string  s,p;
        cin>>s;
        cin>>p;
        int zero,one =0;

        for(int i=0;i<n;i++)
        {
           if(s[i] != p[i])
           {
               if (s[i] =='0');
               zero ++;
           }
           else
           {
               one++;
           }
        }
        if(zero !=one)
        {
            cout<<"NO";
            continue;
        }
        int c1=0;
        bool ans =true;

        for(int i=0;i<n;i++)
        {
            if(s[i] != p[i])
            {
                if(s[i] == '0')
                {
                    if (c1 >0)
                    {
                        c1--;
                    }
                    else
                    {
                        cout<<false;
                        break;
                    }
                    
                }

            }
        }
        if (ans==true)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"NO";
        }
        
        
        
    }
}