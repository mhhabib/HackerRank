#include<bits/stdc++.h>
using namespace std;
int main()
{
    string root,expt;
    int key,cnt=0;
    getline(cin,root);
    getline(cin,expt);
    cin>>key;
    for(int i=0;i<min(root.size(),expt.size());i++){
        if(root[i]==expt[i]) cnt++;
        else break;
    }
    int res=root.size()+expt.size(); //cout<<res<<endl;
    if(res-2*cnt>key) cout<<"No"<<endl;
    else if(res%2==key%2) cout<<"Yes"<<endl;
    else if( (res -key )<0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
