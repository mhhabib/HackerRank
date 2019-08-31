class Solution {
public:
    int tribonacci(int n) {
        if (n==0) return 0;
        if(n==1 || n==2) return 1;
        int ans[n+5];
        ans[0]=0;
        ans[1]=1;
        ans[2]=1;
        for (int i=3;i<=n;i++){
            ans[i]=ans[i-3]+ans[i-2]+ans[i-1];
        }
        return ans[n];
    }
};
