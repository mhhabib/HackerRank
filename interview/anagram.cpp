#include<bits/stdc++.h>
using namespace std;
int a1[26];
int a2[26];
int main()
{

    string s1,s2;
    cin>>s1;
    cin>>s2;
    int sum=0;

    for(int i=0;i<s1.length();i++){
        a1[s1[i]-97]++;
    }
    for(int i=0;i<s2.length();i++){
        a2[s2[i]-97]++;
    }
    for(int i=0;i<26;i++){
        if(a1[i]!=a2[i])
            sum+=abs(a1[i]-a2[i]);
    }
    cout<<sum<<endl;
    return 0;
}
