#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,cnt=0;
    cin>>n>>p;
    if(n==p)
        cout<<0<<endl;
    else if(p==(n-p) || p<(n-p))
        cout<<p/2<<endl;
    else
        cout<<n/2-p/2<<endl;
    return 0;
}
