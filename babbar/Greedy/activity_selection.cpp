#include<bits/stdc++.h>
using namespace std;


struct meeting_time
{
    /* data */
    int start;
    int finish;
    int index;
};

bool compare(meeting_time mt1, meeting_time mt2)
{
    return(mt1.finish <mt2.finish);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        meeting_time mt[n];
        for(i=0;i<n;i++)
        {
            cin>>mt[i].start;
            mt[i].index =i;
        }
        for(i=0;i<n;i++)
        {
            cin>>mt[i].finish;
        }

        sort(mt , mt+n,compare);

        i =0;
        cout<<mt[i].index +1<<" ";
        for(int j=1;j<n;j++)
        {
            if(mt[j] .start >=mt[i].finish)
            {
                cout<<mt[j].index+1<<" ";
                i=j;
            }
        }
        cout<<endl;


    }
}

