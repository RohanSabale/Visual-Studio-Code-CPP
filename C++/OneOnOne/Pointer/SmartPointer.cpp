// Notes
// 0. Smart Pointer is a class which wraps a raw pointer , to manage the life
// time of the pointer
// 1. The most fundamental job of smart pointer is to remove the chances of
// memory leak .
// 2. IT makes sure that the object is deleted if it is not reference any more

// Types 
// 1. unique_ptr:
//             Allows only one owner of the underlying pointer.
// 2.Shared_ptr:
//             Allows multiple owners of the same pointer reference count is maintained
// 3. weak_ptr:
//             IT is special type of shared_ptr which doesnt count the reference 

#include<iostream>
using namespace std;

class MyInt{
    public:
        explicit MyInt(int * p = nullptr)   { data = p;}
        ~MyInt() {delete data;}
        int & operator *() { return * data;}
    private:
            int * data;


};

int main()
{
    int * p = new int(10);
    MyInt myint = MyInt(p);         // myint object is storing what p is pointing to
    cout<<*myint<<endl;
    return 0;
}