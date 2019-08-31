#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t>>n;
    int arr[n+3],arr2[n+2];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int j=0;j<n;j++) arr2[j]=j+1;
    int ok=0;
    for(int i=n-1;i>=0;i-=3){
        int x;
        if(i<0){
            x=abs(i);
            for(int j=i;j>=(i+x-2);j--){
                swap(arr2[j],arr2[j-1]);
                ok++;
            }
        }
        else{
            for(int j=i;j>=i-2;j--){
                swap(arr2[j],arr2[j-1]);
                ok++;
            }
        }
    }
    cout<<ok<<endl;
    return 0;
}
/*
Not yet solved

2
5
1 2 3 4 5
*/
