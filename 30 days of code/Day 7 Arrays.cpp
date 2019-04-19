#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[1001];
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=n;i>=0;i--)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
