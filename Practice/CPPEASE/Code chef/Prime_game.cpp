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
        for(int p=2;p<=x;p++)
        {
                if (prime[p])
                    //cout<<p<<" ";
                    v.push_back(p);
        }
        // v have prime numbers upto max number in test case
        

       // finding the position of each number in test case 
    int pos= 0;
       for(int i=0;i<t;i++)
       {
          for(int j=0;j<v.size();i++)
          {
              if (v[j] >= xa[i])
                pos+=1;
          }
       }
       cout<<pos;
       

       // printing the final answer
       /*          
       if (pos>=y[i])
       {
           cout<<"Divyam";
       }
       else if(pos<=y[i])
       {
           cout<<"Chef";
       }
       */



   
}