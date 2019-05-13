#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,cnt;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cnt=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x<=0) cnt++;
        }
        cout<<( (k>cnt)? "YES":"NO")<<endl;
    }
    return 0;
}
