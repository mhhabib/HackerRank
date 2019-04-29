#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,s,r;
	cin>>n>>m;
	vector<int>v,v1;
	for(int i=0;i<n;i++){
        cin>>r;
        v.push_back(r);
	}
	for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum=0;
            for(int k=j+1;k<n;k++){
                cout<<(v[k]+v[j]+v[i])<<" ";
            }
        }
        cout<<endl;
	}
	return 0;
}
