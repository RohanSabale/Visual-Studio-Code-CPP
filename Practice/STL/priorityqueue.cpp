// std :: priority queue in c++ (piority queue)

// 0. std :: priority queue is a container that provides constant time lookup
// of the largest OR smalest element
//1. by default std :: vector is the container used inside
//2. cost of insertion and extraction is logarithmic
//3.  std :: prioriy:: queue is implemented using std :: make_heap ,std ::push_heao
// std::pop_heap functions,

// basic program

#include<bits/stdc++.h>
using namespace std;

template<typename T> void print_queue (T& q) {
    while(!q.empty()){
        cout<<q.top() << " "<<endl;
        q.pop();
    }
}

int main() {
    {
        priority_queue<int> q;
        for(int elm : {1,8,5,6,3,4,0,9,7,2})   {q.push(elm);}
        print_queue(q);
    }
    {
        priority_queue<int,vector<int> , greater<int> >q2;
        for(int elm : {1,8,5,6,3,4,0,9,7,2})  {q2.push(elm);}
        print_queue(q2);
    }

    // using the lambda to compare elements.
    {
        auto cmp =[] (int left ,int right)  {return (left)  <(right);};
        priority_queue<int, vector<int> ,decltype(cmp) >q3(cmp);

        for(int elm : {1,8,5,6,3,4,0,9,7,2}) {q3.push(elm);}
        print_queue(q3);
    }
    return 0;
}
