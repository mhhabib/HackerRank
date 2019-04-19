#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2!=0)cout<<"Weird"<<endl;
    else{
        if(n==2||n==4 || n>20)cout<<"Not Weird"<<endl;
        for(int i=6;i<=20;i=i+2)
            if(i==n)cout<<"Weird"<<endl;
    }
    return 0;
}
