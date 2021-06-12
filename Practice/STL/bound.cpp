#include<bits/stdc++.h>
#define boost ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

using namespace std;

int main()
{
    boost;
    #ifndef ONLINE_JUDGE
    freopen("input.txt" ,"r" ,stdin);
    freopen("output.txt" , "w" ,stdout);
    #endif
  int n;
  cin>>n;
  int a[n];
  for(int i = 0;i<n;i++)
  {
      cin>>a[i];
  }  
  sort(a,a+n);
  for(auto i : a)
  {
      cout<<i<<" ";
  }
  cout<<endl;

  int *ptr = lower_bound(a,a+n, 5);
  //auto it = lower_bound(a.begin() , a.end(),5); // for vector
//   cout<<*it<<endl;
  cout<<*ptr<<endl;

  int *uptr = upper_bound(a,a+n , 5);
  cout<<*uptr<<endl;
}

//Notes:-
//1. The array / vector should be sorted

// 2.lower_bound returns the index of the next smallest number just greater
// than or equal to that number. if there are multiple values lower bound 
// returns the index of the first such value.

// 3. upper_bound returns an iterator pointing to the first element in the range 
// [first,last) that is greater than value , or last , if no such element is found.



// for sets

// set<int>s;
// for(int i = 0;i<5;i++)
// {
//     int x;
//     cin>>x;
//     s.insert(x);
// }

// for(int  i = 0;i<5;i++)
// {
//     auto it = s.lower_bound(2);
// }
// cout<<(*it)<<endl;