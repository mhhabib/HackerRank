#include<bits/stdc++.h>
using namespace std;
int main()
{
    string password;int n;
    cin>>n;
    cin>>password;
     int u=0,l=0,s=0,k=0,cnt=0;

    for(int i=0;i<password.length();i++)
    {
        if(int(password[i])>64 && int(password[i]<91))
            u++;
        else if (int(password[i]) > 96 && int(password[i] < 123))
            l++;
        else if (int(password[i]) > 47 && int(password[i] < 58))
            k++;
        else s++;
    }
    if(!u)
        cnt++;
    if(!k)
        cnt++;
    if(!l)
        cnt++;
    if(!s)
        cnt++;
    if (n+cnt < 6) {
      cnt+=(6-(n+cnt));
    }
    cout<<cnt<<endl;
    return 0;
}
