int climbStairs(int n){
    //使用递归法会超时，因为重复计算太多！！！！
    if(n==1)
    {
        return 1;
    }
    if(n==2)
    {
        return 2;
    }
    int dp[n+1];
    dp[1] = 1;
    dp[2] = 2;
    for(int i=3;i<=n;i++)
    {
        /*
        第 i阶可以由以下两种方法得到：
        在第 (i-1) 阶后向上爬 1 阶。
        在第 (i-2) 阶后向上爬 2 阶。
        所以到达第 i 阶的方法总数就是到第 (i-1) 阶和第 (i−2) 阶的方法数之和。
        */
        dp[i] = dp[i-1]+dp[i-2];
    }
    return dp[n];

}
