#include<iostream>
using namespace std;
int main()

{
    int d1,v1,d2,v2,p,i=0,k=0;
    cin>>d1>>v1>>d2>>v2>>p;
    if(d1 == d2 && d1==1)
    {
       while(k<p)
       {
           i++;
           k=(v1*i) + (v2*i) ;
       }
       cout<<i<<endl;
    }
    else
    {
        i=min(d1,d2) - 1;
        while (k<p)
        {
            if(d1>d2)
            {
               k+=v2;
                d2++;
            }
            else if(d2>d1)
            {
                k+=v1;
                d1++;
            }
        else if (d1==d2)
        {
            k+=(v1+v2);
        }
        i++;
        }
        cout<<i<<endl;  
    }
}
