#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,m,d,x,cnt=0;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cin>>d>>m;
    for(int i=0;i<v.size();i++){
        int sum=0;
        for(int j=i;j<i+m;j++){
            sum+=v[j];
        }
        if(sum==d)
            cnt++;
    }
    cout<<cnt<<endl;
}
