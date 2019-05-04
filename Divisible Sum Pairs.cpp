#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>x;v.push_back(x);
    }
    int cnt=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(j>i && (v[i]+v[j])%k==0)
                cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
