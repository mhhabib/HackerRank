#include "bits/stdc++.h"
using namespace std;
int main()
{
    string str;
    int arr[30];
    for(int i=0;i<26;i++)
        cin>>arr[i];
    cin>>str;
    int mx=0;
    for(int i=0;i<str.size();i++){
        int index=(int)str[i]-97;
        mx=max(mx,arr[index]);
    }
    cout<<(mx*v.size())<<endl;
    return 0;
}
