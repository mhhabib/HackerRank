#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,mx=0;
    vector<string>v;
    string str;
    cin>>n>>m;
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>str;
        v.push_back(str);
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int tmp = 0;
            for(int k=0; k<m; k++)
            {
                if(v[i][k]=='1' || v[j][k]=='1')
                    tmp++;
            }
            mx = max(mx,tmp);
            mp[tmp]++;
        }
    }
    printf("%d\n",mx);
    cout<<mp[mx]<<endl;
    return 0;
}
