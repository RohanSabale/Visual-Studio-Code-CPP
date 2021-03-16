#include<bits/stdc++.h>
using namespace std;

bool areRotations(string str1,  string str2)
{
    if(str1.length() != str2.length())
    {
        return false;
    }
    string temp = str1 + str1;
    return(temp.find(str2) != string::npos);

}

int main()
{
    string str1 = "ABCD";
    string str2 = "ACBD";
    if(areRotations(str1 , str2))
        cout<<"strings are rotation of each other";
    else    
        cout<<"Strings are not rotation of each other";
    return 0;
}