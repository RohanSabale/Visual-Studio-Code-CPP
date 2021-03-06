#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


bool cmp(struct Job a,struct Job b)
{   
    return a.profit>b.profit;
}

pair<int,int> JobScheduling(Job arr[], int n) 
{   
        sort(arr,arr+n,cmp);
        pair<int,int>p;
        int slot[n];
        bool ji[n];
       /* 
        for(int i=0;i<n;i++)    // here we can use memset also for assigning all values as false
        {  
             ji[i]=false;
        }
        */
       memset(ji,false,n);
        
        for(int i=0;i<n;i++)
        {
               for(int j=min(n,arr[i].dead)-1;j>=0;j--)
            { 
                  if(ji[j]==false)
                { 
                    ji[j]=true;
                    slot[j]=i;
                    break;
                }
            }
        }
        int profit=0;
        int jo=0;
        for(int i=0;i<n;i++)
        {
               if(ji[i])
            { 
                profit=profit+arr[slot[i]].profit;
                jo++;
            }
        }
        p.first=jo;
        p.second=profit;
        return p;
} 


int main() 
{ 
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        Job arr[n];
        
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        pair<int,int> ans = JobScheduling(arr, n);
        cout<<ans.first<<" "<<ans.second<<endl;
    }
	return 0; 
}


 