#include<bits/stdc++.h>
using namespace std;


void explainPair()
{
    pair<int,int> p={1,3};        // for storing 1 and 3
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,int>> pa={1,{3,4}};
    cout<<pa.first<<" "<<pa.second.second<<" "<< pa.second.first;              //prints 1 4 3
    cout<<endl;


    pair<int,int>arr[]={{1,2},{2,5},{6,7}};
    cout<<arr[1].second;
}
void explainVector()
{
    vector<int>v;             // This define the null vector
    v.pushback(1);           // inserting the number in vector
    v.emplace_back(2);             // inserting the number at last of the vector               also can be used push_back
    
    //vector of size 5 with everyone as 100
    vector<int>v(5,100);             //{100,100,100,100,100}

    //vector of size 5 
    //initialized with 0
    //might take garbage value;
    //dependent on the vector
    vector<int> v(5);             //{0,0,0,0,0}
    
    vector<int>v1(5,20);         //{20,20,20,20,20}
    vector<int>v2(v1);           //{20,20,20,20,20}                simply means making copy of the v1

    // Take the vector to be {10,20,30,40}
    vector<int> : : iterator it=v.begin();                        // syntax           v.begin will pint to 1 element

    it++;
    cout<<(*it) << " ";   prints 20

    it =it+2;
    cout<< *(it) << " ";            //printes 30

    vector<int>: : iterator it=v.end();
    vector<int>: : iterator it=v.rend();
    vector<int>: : iterator it=v.rbegin();

    cout<< v[0] << " "<<v.at[0];
    cout<<v.back()<< " ";                       // prints the last element of vector

    // ways to print the vector
    for (vector<int> : : iterator it = v.begin(); it!= v.end(); it++)
    {
        cout<< *(it)<<" ";
    }

    for ( auto it= v.begin(); it != v.end(); it ++)
    {
        cout<< *(it) << " ";
    }

    for(auto it : : v)
    {
        cout<< it << " ";
    }
    
    //{10,20,12,23}
    v.erase (v.begin());

    //{10,20,12,23,35}
    v.erase (v.begin() + 2,v.begin() + 4);            // {10,20,35}

    // Insert function

    vector<int> v(2,100);   //{100,100}
    v.insert(v.begin(),300) ;     //{300,100,100}
    v.insert(v.begin(), copy.begin(), copy.end());                  //{50,50,300,10,10,100,100}

    //{10,20}
    cout<<v.size();          //2

    //{10,20}
    v.pop_back();                 //10

    // v1 ->{10,20}
    //v2->{30,40}
    v1.swap(v2);   //v1-> (30,40)         v2-> (10,20)
    v.clear();        // erases the entire vector

    cout<<v.empty();
}






int main()
{
    explainPair();
}

