//  The basic  STL are vector

#include<bits/stdc++.h>
using namespace std;

bool f(int x ,int y)
{
    return x>y;
}

int main()
{
    vector<int > A={11,2,3,14};
    cout<<A[1]<<"\n";
    sort(A.begin(),A.end());               // sorting 
    
    bool present=binary_search(A.begin(), A.end(), 3);             //   binary_seach (start,end,numbet  to be searched)          this should be true
    present=binary_search(A.begin(), A.end(), 4);        // THis should be false 

    A.push_back(100);                   // Inserting the value in array A
    present=binary_search(A.begin(),A.end(),100);      //true
    //2,3,11,4,100

    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);

    //2,3,11,4,100,100,100,100,100,123
     
     // finidng the first occurence of 100
    vector<int> :: iterator it = lower_bound(A.begin(), A.end(), 100);    //>=                    needs to be sorted first for performing lower bound and upper bound
    vector <int> :: iterator it2 = upper_bound(A.begin(),A.end(),100);   // >

    cout<< * it<<" "<<* it2 <<endl;
    cout<< it2-it<<endl;   // 5       Count of the number of occurence of 100

    // sorting the array or vector in descending order
    sort(A.begin(), A.end(), f);
    vector<int> :: iterator it3;

    for(it3=A.begin(); it3!= A.end(); it3++)
    {
        cout<<*it3<<" ";
    }   
    cout<<endl;

}
