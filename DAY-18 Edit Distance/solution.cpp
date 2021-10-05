class Solution {
  public:
    int editDistance(string s, string t) {
        // Code here
        int n = s.length();
        int m = t.length();

        int dp[n+1][m+1];

        //dp boundary case n=0 & m=0
        for(int i=0;i<=n;i++)
        dp[i][0]=i;
        for(int j=0;j<=m;j++)
        dp[0][j]=j;

        //start from right to left
        for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            //if char equal, do nothing
            if(s[i-1] == t[j-1])
            dp[i][j] = dp[i-1][j-1];
            //if not equal, 3 operations insert, delete or replace
            else{
                //insert -> 1+dp[i][j-1]
                //delete -> 1+dp[i-1][j]
                //replace -> 1+dp[i-1][j-1]
                dp[i][j] = min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
            }
        }

        return dp[n][m];
    }
};
