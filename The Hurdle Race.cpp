#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    if(*max_element(v.begin(),v.end())>k)
        cout<<*max_element(v.begin(),v.end())-k<<endl;
    else cout<<0<<endl;
    return 0;
}
