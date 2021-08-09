// steps for recursion
//1. find the base class
//2. find the relation between the problem and subproblem
//3. generalize the relation




/*
########### Code snippets.############
1. Sum of n numbers
2. power as a^b
3.ways to go from left top corner to right bottom corner in n*m matrix
4. factorial of a number
5.fibonacci series
6. print the spelling of digits
7. 2^n using fast exponentiation
8. Check the array is sorted or not
9. print the power set of array
10.number of jumps to get to the point   required you can jump only 1,2,3 steps at once
11. all the subsequences of the string
12. permutaions of the string.
13.sum of digits of a  number
14.  Reverse a sting
15. Palindrome Checker

*/
#include<bits/stdc++.h>
using namespace std;

//1
int sum(int n)          // sum of n numbers
{
    if(n==1)
    {
        return 1;
    }
    return n+sum(n-1);
}

//2
int power(int a , int b)            // power as a^b         complexity O(n)
{
    if(b ==0)
    {
        return 1;
    }
    return a*power(a,b-1);
}

//3
int ways_matrix(int n , int m)      // ways to go from left top corner to right bottom corner in nxm matrix
{
    if(n== 1 || m == 1)
    {
        return 1;
    }
   return ways_matrix(n-1,m) + ways_matrix(n,m-1);
}

//4
int factorial(int n)        // factorial of number
{
    if(n<=1)
    {
        return 1;
    }
    else
    return factorial(n-1) * n;
}

//5
int fibonacci(int num)              // fibonacci series
{
    if(num == 1 || num ==0)
    {
        return num;
    }
    else
    return fibonacci(num-1) + fibonacci(num-2);
}

//6
void printdigit(int n)                      // print the spelling of digits
{
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n==0)
    {
        return ;
    }
    printdigit(n/10);
    cout<<arr[n%10]<<" ";
}

//7
int exp(int n)              //2^n  using fast exponentiation
{
    if(n==0)
    {
        return 1;
    }
   int ans = exp(n/2);
   if(n&1)
   {
       return 2*ans*ans;
   }
   else
   {
       return ans*ans;
   }
}


//8
bool checksorted(vector<int>arr , int index)                // checking the array is 
//sorted or not
{
    if(index >= arr.size())
    {
        return true;
    }
    if(arr[index] < arr[index-1])
    {
        return false;
    }
    return checksorted(arr, index +1);
}

//9
void printsubset(vector<int>input , vector<int>output , int index)          // all the subsets of the array
{
    if(index>=input.size())
    {
        for(auto i : output)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
        return;
    }

    // nahi lena 
    printsubset(input , output , index+1);

    // lena hai 
    output.push_back(input[index]);
    printsubset(input , output , index+1);
}

//10.
int numberofjumps(int n)                        // number of jumps to get to the point
// required you can jump only 1,2,3 steps at once
{
    if(n<0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    if(n==0)
    {
        return 1;
    }
    return numberofjumps(n-1) + numberofjumps(n-2) + numberofjumps(n-3);
}


//11
void getsubsequence(string str, int index , string output)  // all the subsequences of the string
{
    if(index == str.length())
    {
        cout<<output<<endl;
        return;
    }
    // nahi lena 
    getsubsequence(str , index+1 , output);

    // lena hai
    output.push_back(str[index]);
    getsubsequence(str, index+1 , output);
}


//12
void getperm(string str , int index)        // permutaions of the string
{
    if(index>=str.length())
    {
        cout<<str<<endl;
        return;
    }
    for(int i = index ;i<str.length();i++)
    {
        swap(str[index],str[i]);

        getperm(str , index+1);
        
        // backtrack
        swap(str[index],str[i]);
    }
}

//13.  sum of  digits of a number

int sum_digit(int n)
{
    if(n<10)
    {
        return n;
    }
    int k = n%10;
    return k + sum_digit(n/10);
}

//14. reverse a string
void reverse(string s)
{
    if(s.size() == 0)
    {
        return;
    }
    reverse(s.substr(1));
    cout<<s[0];
}

int main()
{
    //cout<<sum(1);
    //cout<<power(3,5);
    //cout<<ways_matrix(4,3);
    //cout<<factorial(5);
    
    // int num = 10;
    // int i =0;
    // while( i<num)
    // {
    //     cout<<" "<<fibonacci(i);
    //     i++;
    // }

    // int n;
    // n =1000 ;
    // printdigit(n);

    // int n;             
    // n = 5;
    // exp(n);

//     vector<int>arr{1,2,3,7,5};
//    bool answer = checksorted(arr,1);
//    cout<<answer;


    // cout<<"enter size";
    // int size;
    // cin>>size;

    // vector<int>vec(size);
    // vector<int>subset;

    // cout<<"Enter elements"<<endl;
    // for(int i =0;i<size;i++)
    // {
    //     cin>>vec[i];
    // }
    // cout<<"Power set is as floows"<<endl;
    // printsubset(vec ,subset ,0);


    // cout<<"enter the value of n"<<endl;
    // int n;
    // cin>>n;

    // cout<<"Number of jumps"<<numberofjumps(n)<<endl;

    // cout<<"Enter the string"<<endl;
    // string str;
    // cin>>str;

    // cout<<"Printing all the subsequences"<<endl;
    // string output="";
    // getsubsequence(str,0,output);


    // cout<<"Enter the string"<<endl;
    // string str;
    // cin>>str;

    // cout<<"Printing all the permutations"<<endl;
    // getperm(str , 0);

    // int n;
    // n = 981;
    // cout<<"printing the sum of digits of a number"<<" ";
    // cout<<sum_digit(n);

    
    // cout<<"reversing a string"<<endl;
    // string s;
    // s = "string";
    // reverse(s);

     
}