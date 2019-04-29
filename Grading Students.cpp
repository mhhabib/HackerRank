#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[101];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]>=38){
            if(arr[i]==38)cout<<40<<endl;
            else if(arr[i]%5==3) cout<<arr[i]+2<<endl;
            else if(arr[i]%5==4) cout<<arr[i]+1<<endl;
            else cout<<arr[i]<<endl;
        }
        else cout<<arr[i]<<endl;
    }
    return 0;
}
