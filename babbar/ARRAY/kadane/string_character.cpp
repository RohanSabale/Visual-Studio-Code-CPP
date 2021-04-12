// print the longest occurence of characters in string herer we have taken (*) its ascii value is 42   you can change at
// line number 22

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
        string s;
        cin>>s;

        int count = 0;
        int current = 0;
        for(int i = 0;i<n;i++)
        {
            if(int(s[i]) ==42)
            {
                count++;
                if(count >=current)
                    current  = count;
            }
            else
            {
                count =0;
            }

        }
        if(current >=k)
        {
            cout<<"yes"<<"\n";
        }
        else
        {
            cout<<"no"<<"\n";
        } 
	}
	return 0;
}
