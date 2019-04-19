#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[100002];
    int n;
    cin>>n;
    getchar();
    for(int k=0;k<n;k++){
        gets(ch);
        int j=strlen(ch)-1;
        int i=0,ans=0;
        while(i<=j){
             ans+=abs(ch[i]-ch[j]);
             i++;j--;
        }
        cout<<ans<<endl;
    }
    return 0;
}
