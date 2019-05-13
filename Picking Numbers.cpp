#include "bits/stdc++.h"
using namespace std;
map<int,int>mp;
int main()
{
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        mp[val]++;
    }
    int mx=0;
    for(int i=0;i<101;i++){
        mx=max(mx,mp[i]+mp[i+1]);
    }
    cout<<mx<<endl;
    mp.clear();
    return 0;
}
