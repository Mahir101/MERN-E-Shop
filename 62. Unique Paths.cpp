class Solution {
public:
    int dp[101][101];
    int uniquePaths(int m, int n) {
        
        for(int i=n-1; i>=0; i--) {
            dp[i][m-1] = 1;
        }

        for(int i=m-1; i>=0; i--) {
            dp[n-1][i] = 1;
        }
        for(int i=n-2; i>=0; i--) {
            for(int j=m-2; j>=0; j--) {
                dp[i][j] = dp[i+1][j] + dp[i][j+1];
            }
        }
        return dp[0][0];
    }
};
