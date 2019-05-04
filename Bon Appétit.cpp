#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,diff,sum=0,div;
    cin>>n>>k;
    int arr[n+2];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cin>>div;
    diff=abs(sum-arr[k])/2;
    if(diff==div) cout<<"Bon Appetit"<<endl;
    else cout<<abs(div-diff)<<endl;
    return 0;
}
