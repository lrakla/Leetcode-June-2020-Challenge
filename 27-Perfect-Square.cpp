class Solution {
public:
    int numSquares(int n) {
        int dp[n+1];
        if(n<4){
            return n;
        }
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 3;
        for(int i=4 ; i<=n ; i++){
            dp[i]  = i;
            for(int j = 1;j<=ceil(sqrt(i));j++){
                int temp = j*j;
                if(temp > i) break;
                else dp[i] = min(dp[i],1+dp[i-temp]);
            }
        }
        return dp[n];
    }
};