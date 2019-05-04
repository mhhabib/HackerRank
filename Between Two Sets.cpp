#include<bits/stdc++.h>
using namespace std;
int arr[101],arr2[101];
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<m;i++) cin>>arr2[i];
    int lcm=arr[0];
    int gdc=arr2[0];
    for(int i=1;i<n;i++)
        lcm=(lcm*arr[i])/gcd(lcm,arr[i]);
    for(int i=0;i<m;i++)
        gdc=gcd(gdc,arr2[i]);

    for(int i=1;i<=gdc;i++){
        if(lcm*i>gdc)
            break;
        v.push_back(lcm*i);
    }
    int cnt=0;
    for(int i=0;i<v.size();i++){
        if(gdc%v[i]==0)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
