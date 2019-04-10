#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>s1;
        int sum=0;
        for(int j=0;j<s1.length()-1;j++){
            if(s1[j]==s1[j+1])
                sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
