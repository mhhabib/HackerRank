#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10][10];
    for(int i=0;i<6;i++)
        for(int j=0;j<6;j++)
            cin>>arr[i][j];
    int mx=-999999999;
    for(int i=0;i<6;i++){
        int ans=0;
        for(int j=0;j<6;j++){
            if(i>0 && i<5 && j>0 && j<5){
                ans=arr[i][j]+arr[i-1][j]+arr[i-1][j-1]+arr[i-1][j+1]+arr[i+1][j]+arr[i+1][j-1]+arr[i+1][j+1];
                mx=max(mx,ans);
            }
        }
    }
    cout<<mx<<endl;
    return 0;
}
