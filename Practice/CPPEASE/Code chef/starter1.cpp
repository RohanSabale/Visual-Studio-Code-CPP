#include<bits/stdc++.h>
#define boost ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define endl "\n"
using namespace std;

auto first(int a1, int a2 , int a3)
{
    int total=0;
    total = a1+a2 +a3;
    return total;
}

auto second(int b1, int b2 , int b3)
{
    int total2=0;
    total2 = b1+b2 +b3;
    return total2;
}

int main()
{
    boost;
    #ifndef ONLINE_JUDGE
    freopen("input.txt" ,"r" ,stdin);
    freopen("output.txt" , "w" ,stdout);
    #endif
    
   
   int t;
   cin>>t;
   while(t--)
   {
       int d,c;
       cin>>d>>c;
       int a1,a2,a3;
       cin>>a1>>a2>>a3;

       int b1,b2,b3;
       cin>>b1>>b2>>b3;

       int first1 = first(a1,a2,a3);
       int second1 = second(b1 ,b2,b3);

        int total1 = first1 + second1;
       //int delivery = total1 + 2*d;
       int coupon =0;
      
       if(first1>=150 && second1>=150)
       {
           coupon = total1 + c;
       }
        if(first1<=150 && second1<=150)
        {
            coupon =  total1 + 2*d;
        }
        if(first1>=150 && second1<=150)
        {
            coupon = total1 +c +d;
        }

        if (coupon<total1)
        {
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }


      
   }
}
