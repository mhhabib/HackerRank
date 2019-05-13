#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    set<char>v;
    set<char>::iterator it;
    string str;
    cin>>n;
    while(n--){
        cin>>str;
        for(int i=0;i<str.size();i++){
            char ch=(char)str[i];
            v.insert(ch);
        }
        cout<<v.size()<<endl;
        v.clear();
    }
    return 0;
}
