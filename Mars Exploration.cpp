#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int cnt=0;
    for(int i=0;i<str.size();i++){
        if(((i+1)%3==0 && str[i]!='S')||((i+1)%3==1 && str[i]!='S'))
            cnt++;
        else if((i+1)%3==2 && str[i]!='O')
            cnt++;
    }
    cout<<cnt<<endl;
}
