#include <iostream>  
using namespace std;  
int main()  
{  
  int t;
  cin>>t;
  while(t--)
  {
  int n, i, m=0, flag=0;  
  cin>>n;
  m=n/2;  
  for(i = 2; i <= m; i++)      // tried while loop also
  {  
      
      if(n % i == 0)   // number is even number
      {  
          int k;
          k = n/2;
          cout<<"2"<<" "<<k<<endl;      
          flag=1;  
          break;  
      }  
  }  
  if (flag==0)     // number is prime number
      cout << "1" << " "<<n<<endl;  
  }
  return 0;  
}


