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
        int a =min(n,m);
        if(n_count>m_count)
        {
            cout<<0<<endl;
        }
            sort(n_pack, n_pack + n);
            sort(m_pack,m_pack+m);
            reverse(m_pack , m_pack +m);

            else{
                while(n_count<=m_count)
            {
            //sort(n_pack, n_pack + n);
            //sort(m_pack,m_pack+m);
            //reverse(m_pack , m_pack +m);
            if(n_pack[i] <m_pack[i] && i>a )
            {
                temp = m_pack[i];
                m_pack[i] =n_pack[i];
                n_pack[i] =temp;
                i+=1;
            }
            else
            {
                x=false;
                cout<<"-1"<<endl;
                break;
            }
            }
            if(x==true)
            {
                cout<<i<<endl;
            }
            }          
            
    }    
}