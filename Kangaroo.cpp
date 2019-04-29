#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,v1,v2;
    cin>>x1>>v1>>x2>>v2;
    if(x2>x1 && v2>v1) cout<<"NO"<<endl;
    else {
        for(int i=0;i<1009;i++){
            x1+=v1;
            x2+=v2;
            if(x1==x2){
                cout<<"YES"<<endl;
                break;
            }
        }
        cout<<"NO"<<endl;
    }
    return 0;
}
