#include<bits/stdc++.h>
using namespace std;
int a1[26];
int main()
{

    string s1,s2;
    int ck=0;
    cin>>s1;

    int sum=1;

    for(int i=0;i<s1.length();i++){
        a1[s1[i]-97]++;
    }
    for(int i=0;i<26;i++){
        cout<<a1[i]<<" ";
    }

    ck=a1[s1[0]-97];
    for(int i=0;i<26;i++){
        if(a1[i]!=0 && a1[i]!=ck)
            sum++;
    }
    cout<<endl;
    cout<<sum<<endl;
    if(sum==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

