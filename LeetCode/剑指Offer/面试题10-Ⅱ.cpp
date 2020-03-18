int numWays(int n){
    if(n<=1)
    {
        return 1;
    }
    if(n==2)
    {
        return 2;
    }
    long long dp[105];
    dp[1] = 1;
    dp[2] = 2;
    for(int i=3;i<=n;i++)
    {
        dp[i] = (dp[i-1]%1000000007 + dp[i-2]%1000000007)%1000000007;
    }
    return dp[n]%1000000007;

}
