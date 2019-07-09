#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r;
    int val=0;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        for(int j=l;j<=r;j++){
            val=max(val,i xor j);
        }
    }
    cout<<val<<endl;
    return 0;
}
