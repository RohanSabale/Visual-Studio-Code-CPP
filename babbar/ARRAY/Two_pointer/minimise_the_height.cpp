// minimize the maximum difference between heights
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> V{3, 9, 12, 16, 20};
    int k = 3;
    vector<pair<int,int>> vect;
    vector<int > vis(V.size());

    int count = 0;
    for (auto v : V)
    {
       if(v-k>=0)
       {
           vect.push_back(make_pair(v - k , count));
       }
        vect.push_back(make_pair(v + k , count));
        count ++;
    }

    sort(vect.begin() , vect.end());              // sorting the pair in basis of the first element
    //sort(vect.begin(), vect.end(), sortbysec);          // sorting the pair on the basis of the second element

    int ele = 0;
    int left = 0;
    int right = 0;

    while(ele <V.size() && right <vect.size())
    {
        if(vis[vect[right].second] ==0)
        {
            ele++;
        }
        vis[vect[right].second]++;
        right++;
    }

    int ans = vect[right -1].first  - vect[left].first;
    while(right <vect.size())
    {
        if(vis[vect[left].second] ==1)
        {
            ele--;
        }
        vis[vect[left].second]--;
        left ++;

        while(ele < V.size() && right <vect.size())
        {
            if(vis[vect[right].second] ==0 )
            {
                ele ++;
            }
            vis[vect[right].second] ++;
            right++;
        }
        if(ele == V.size())
        {
            ans  = min(ans , vect[right - 1].first - vect[left].first);
        }
        else{
            break;
        }
    }
    cout<<ans;

}