#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int counter = 0, ax =0;
    while (n > 0) {
        int rem = n%2;
        if (rem==1) counter++;
        else counter=0;
        ax = max(counter, ax);
        n/=2;
    }
    cout<<ax<<endl;
    return 0;
}

