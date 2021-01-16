// topic std:: pair

// syntax
//pait<int ,int> obj(10,20);

//1. it is struct template tht provides a way to store two heterogenous objects as 
// a single unit
//2/ map,multimap,unorder_map,unorder_multimap can use pair to insert data into their structure

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void print(pair<int ,int > &obj) { cout<<obj.first <<" " << obj.second <<endl;}

int main()
{   { 
        pair <int,int>obj(10,20);
        print(obj);
    }
    {
        pair<int,int> obj = make_pair(10,20);
        print(obj);
    }
    {
       vector <pair<string ,int > > list;
       list.push_back(make_pair("kylie" , 30));
       list.push_back(make_pair("chris" , 31));
       list.push_back(make_pair("christ" , 32));
       
       list.push_back(pair<string,int>("bhupendra" , 22));
     

       for( const auto& elm:list){
           cout<<elm.first <<" "<<elm.second<<endl;
       }
    }
    return 0;
}

