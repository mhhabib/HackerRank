#include <bits/stdc++.h>
using namespace std;
vector<int>v,v1;
int diff(int p,int q)
{
    int mx=0,mn=INT_MAX;
    for(int i=p;i<q;i++){
        mx=max(mx,v[i]);
        mn=min(mn,v[i]);
    }
    return (mx-mn);
}
int main()
{
    int n,k,x;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        int lw=0+i,up=k+i;
        if(up<=n)
            v1.push_back(diff(lw,up));
    }
    cout<< *min_element(v1.begin(),v1.end()) <<endl;
    return 0;
}

