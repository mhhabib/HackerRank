#include<bits/stdc++.h>
using namespace std;
int rev(int n)
{
    int temp=n;
    int num=0;
    while(n>0){
        int rem=n%10;
        num=num*10+rem;
        n/=10;
    }
    return num;
}
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int cnt=0;
    for(int i=n;i<=m;i++){
        if(abs(i-rev(i))%k==0) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
