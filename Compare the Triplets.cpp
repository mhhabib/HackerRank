#include<bits/stdc++.h>
using namespace std;
int main()
{
    int alice[101],bob[101],al=0,bb=0;
    for(int i=0;i<3;i++){
        cin>>alice[i];
    }
    for(int i=0;i<3;i++){
        cin>>bob[i];
    }
    for(int i=0;i<3;i++){
        if(alice[i]>bob[i])
            al++;
        else if(bob[i]>alice[i])
            bb++;
    }
    cout<<al<<" "<<bb<<endl;
    return 0;
}
