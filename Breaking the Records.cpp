#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[1001];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int mx=arr[0],mc=0;
    int mn=arr[0],mnc=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mx){
            mx=arr[i];
            mc++;
        }
        else if(arr[i]<mn){
            mn=arr[i];
            mnc++;
        }
    }
    cout<<mc<<" "<<mnc<<endl;
    return 0;
}

