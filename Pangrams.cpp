#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    //cin.ignore();
    getline(cin,str);
    //cin.ignore();
    int arr[26];
    for(int i=0;i<str.length();i++){
        //if(str[i]!=' ')
            arr[tolower(str[i])-'a']++;
    }
    bool ck=true;
    for(int i=0;i<26;i++){
        if(arr[i]<1){
            ck=false;
            cout<<"not pangram"<<endl;
            break;
        }
    }
    if(ck) cout<<"pangram"<<endl;
    return 0;
}
