#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,cnt=0;
    vector<int>v,v1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1]){
            v1.push_back(v[i]);
            cnt++;
        }
    }
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    return 0;
}
