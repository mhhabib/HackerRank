#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,num;
    cin>>test;
    while(test--){
        cin>>num;
        int temp=num;
        int cnt=0;
        while(num>0){
            int rem=num%10;
            if(rem!=0 && temp%rem==0 ) cnt++;
            num/=10;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
