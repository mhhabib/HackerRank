#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int ln=str.size();
    int cnt=0;
    for(int i=0;i<ln;i++){
        if(str[i]>=65 && str[i]<=90)
            cnt++;
    }
    cout<<cnt+1<<endl;
}
