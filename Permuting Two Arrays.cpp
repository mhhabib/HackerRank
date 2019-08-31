#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n+5],b[n+5];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        sort(a,a+n);sort(b,b+n);
        int ck=0;
        for(int i=0;i<n;i++){
            if((a[i]+b[n-i-1])>=k)
                ck++;
        }
        if(ck==n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
