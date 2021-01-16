#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
    
        int n,m;
        cin>>n>>m;

        int n_pack[n];
        int n_count=0;
        for(int i=0;i<n;i++)
        {
            cin>>n_pack[i];
            n_count +=n_pack[i];
        }

        int m_pack[m];
        int m_count=0;
        for(int i=0;i<m;i++)
        {
            cin>>m_pack[i];
            m_count+=m_pack[i];
        }



        int i=0;
        bool x=true;
        int temp=0;
        if(n_count>m_count)
        {
            cout<<0<<endl;
        }
        else
        {
            
        
        
            sort(n_pack, n_pack + n);
            sort(m_pack,m_pack+m);
            reverse(m_pack , m_pack +m);
            
            while(n_count<=m_count && i<n && i<m)
            {
             
                    m_count = m_count - m_pack[i] +n_pack[i];
                    n_count = n_count - n_pack[i] +m_pack[i];
                    temp = m_pack[i];
                    m_pack[i] =n_pack[i];
                    n_pack[i] =temp;
                    i+=1;
                
                   
                
            }
            if(n_count<=m_count)
            {
                cout<<"-1"<<endl;
            }
            else
            {
                cout<<i<<endl;
            }
               
        }        
            
    }
}