#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,n,m;
    cin>>b>>n>>m;
    int key[n+2],mouse[m+2];
    vector<int>v;
    for(int i=0;i<n;i++) cin>>key[i];
    for(int i=0;i<m;i++) cin>>mouse[i];
    for(int k=0;k<n;k++){
        for(int p=0;p<m;p++){
            v.push_back(key[k]+mouse[p]);
        }
    }
    sort(v.begin(),v.end());
    int mx=0;
    if(b<v[0]){
        cout<<-1<<endl;
        return 0;
    }
    else{
        for(int i=0;i<v.size();i++){
            if(v[i]<=b){
                mx=max(mx,v[i]);
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}
