#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,temp="hackerrank";
    int n;
    cin>>n;
    while(n--){
        cin>>str;
        if(temp.length()>str.length())
            cout<<"NO"<<endl;
        else{
            int k=0;
            for(int i=0;i<str.length();i++){
                if(k<temp.length() && str.at(i)==temp[k])
                k++;
            }
            cout<<(k==temp.length()? "YES" : "NO")<<endl;
        }
    }
}
