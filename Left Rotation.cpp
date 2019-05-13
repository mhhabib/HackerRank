#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+2];
    for(int i=0;i<n;i++)cin>>arr[i];
    k=k%n;
    for(int m=0;m<k;m++){
        int last=arr[0];
        for(int i=0;i<n-1;i++)
            arr[i]=arr[i+1];
        arr[n-1]=last;
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    return 0;
}
