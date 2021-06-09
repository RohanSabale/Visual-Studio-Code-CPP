// points
// 1. There are two places where we can apply templates
//     a. function templates 
//     b. class templates
// 2. Templates are the way to write generic programs
//Generic Programming enables the programmer to write a general algorithm
//which will work with all data types. 
// 3. The main point is we pass data type as parameter to function or class 

// Example of max function

#include<iostream>
using namespace std;


template<typename T>

T getMax(T x ,T y)
{
    return x>y ? x:y;
}
// int getMax(int x , int y)
// {
//     return x>y? x:y;
// }

// char getMaxChar(char x , char y)
// {
//     return x>y ? x:y;
// }

int main()
{
    int x = 18 , y = 20;
    //cout<<getMax(x,y);
    char c1 = 'a' , c2 ='x';
    //cout<<static_cast<char>(getMaxChar(c1,c2))<<endl;
    cout<<getMax<int>(x,y)<<endl;           // passing the datatypes
    cout<<getMax<char>(c1,c2)<<endl;

}