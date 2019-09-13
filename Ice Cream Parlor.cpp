#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int tk,n;
        cin>>tk>>n;
        int arr[n+5];
        int first=0,last=n-1;
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int sum=arr[i]+arr[j];
                if(sum==tk){
                    first=i;
                    last=j;
                }
            }
        }
        cout << first+1 << " " << last+1 <<endl;
    }
    return 0;
}
