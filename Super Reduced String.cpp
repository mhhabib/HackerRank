#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    while(1){
        string temp="";
        for(int i=0;i<str.size();){
            if(str[i]==str[i+1])
                i += 2;
            else{
                temp+=str[i];
                i++;
            }
        }
        if(str==temp)
            break;
        str=temp;

    }
    if(str.size()==0)
        cout<<"Empty String"<<endl;
    else cout<<str<<endl;
    return 0;
}
