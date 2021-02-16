#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    //t=1;
    int xa[t];   // array for precomputation
    int ya[t];      // array for precomputation

    for(int i=0;i<t;i++)
    {
        int x,y;
       // x=2021;
        //y=42;
        cin>>xa[i]>>ya[i];            // storing test cases in array
    }

    int x = *max_element(xa , xa +t );    // max element from all the test cases;
    //Sieve(x);


    // this have array which contains all the prime numbers which we want
     bool prime[x+1];
        memset(prime , true , sizeof(prime));
        prime[0] = prime[1] =false;

        for (int p=2 ; p* p <=x ;p++)
        {
            if (prime [p] == true)
            {
                for(int i =p*2 ;i<=x;i+=p)
                {
                    prime[i] =false;
                }
            }
        }
        vector<int>v;   
        int pos= 0;
        for(int p=0;p<=x;p++)
        {
                if (prime[p])
                      ++pos;
                    //cout<<p<<" ";
                v.push_back(pos);
        }
        /*
        for (int value : v)
        {
            cout<<value<<endl;
        }
        */

    
           
        // v have prime numbers upto max number in test case
        

       // finding the position of each number in test case 
    
       
       

        for (int i=0;i<t;i++)
       {       
       if (v[xa[i]]>ya[i])
       {
           cout<<"Divyam"<<endl;
       }
       else if(v[xa[i]]<=ya[i])
       {
           cout<<"Chef"<<endl;
       }
    
       }
   
}