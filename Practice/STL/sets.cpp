    // 1. set is an associative container that contains a sorted set of unique objects of type key
    //2. usually implemented using red -black tree
    // 3. insertion ,removal ,delete have logarithmic complexity
    //4. if we want to store user defined data type in set then we will have to
    // provide compare function so that set can store them in sorted order
    //5. we can pass the order of sorting while constructing set object;

    //6. it store unique elements and they are stores in sorted order(a/d)

#include<bits/stdc++.h>
using namespace std;

class Person
{
    public :
        float age;
        string name;
    bool operator <(const Person& rhs) const { return age<rhs.age; }       // in age > can be used for descending order
    bool operator > (const Person& rhs) const { return age>rhs.age;}
};

int main()
{
    set<Person , std :: greater<>> Set ={{25.0,"rohan"},{30.0, "sabale"},{31.0,"kylie"}};    // at the place of greater we can use less also for ascending order
    for(const auto&e : Set){
        cout<<e.age<<" "<<e.name<<endl;
    }


   set<int > st = {7,2,3,4,5};
   for(const auto & e : st)
   {
       cout<<e<<endl;
    }
  

}