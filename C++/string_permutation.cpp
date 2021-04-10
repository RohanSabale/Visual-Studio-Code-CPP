#include<bits/stdc++.h>
using namespace std;


// time complexity  O(n*n!)
// time to print one string *  combinations of string

void permute(string s  , int l , int r)
{
    if(l ==r)
    {
        cout<<s<<"\n";
    }
    else{
        // permutation made
        for(int i = l;i<=r;i++)
        {
            swap(s[l], s[i]);
            permute(s,l+1,r);
            swap(s[l] , s[i]);
        }
    }
}

/*
// function to print permutation of string str,
// out is used to store permutations one by one

void permutes(string s, string out)
{
    // when size of str becomes 0 , out has a 
    // permutation (length of out is n)

    if(s.size() == 0)
    {
        cout<<out<<"\n";
        return;
    }
    // one by one move all characters at 
    // the beginning of out(or result)

    for(int i=0;i<s.size();i++)
    {
        // remove first character from str and
        // add it to out
        permutes(s.substr(1), out+s[0]);

        // rotates string in a way second character
        // moves to the beginning
        rotate(s.begin(),s.begin()+1,s.end());

    }
}
*/

int main()
{
    string s;
    s= "abc";
    int n = s.size();
    permute(s,0,n-1);
    //cout<<"rotated string";
    //permutes(s,"");
    return 0 ;

}