#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+2];
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int mx=0;
    for(int i=0;i<mp.size();i++){
        if(mp[mx]<mp[i])
            mx=i;
    }
    cout<<mx<<endl;
    return 0;
}
