// this works for negative  number also
// here we have to check the number lies within a range

#include<bits/stdc++.h>
using namespace std;

bool inRange(int low ,int high , int x)
{
    return((x-low) * (x-high) <=0);

}
int main()
{
    inRange(10,100,30)? cout<<"yes\n": cout<<"no";
    inRange(-1,-5,-2) ? cout<<"yes\n" :cout<<"no";
}