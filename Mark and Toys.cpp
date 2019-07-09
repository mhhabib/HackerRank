#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+1];
    int sum=0,cnt=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<=k) {
            cnt++;
        }
        else break;
    }
    cout<<cnt<<endl;
    return 0;
}
