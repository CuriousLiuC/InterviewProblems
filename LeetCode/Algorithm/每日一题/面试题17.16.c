
int massage(int* nums, int numsSize){
    int dp[1005];
    memset(dp,0,sizeof(dp));
    if(numsSize==0)
    {
        return NULL;
    }
    else if(numsSize==1)
    {
        return nums[0];
    }
    else
    {
        dp[0] = nums[0];
        dp[1] = nums[1];
        if(numsSize==2)
        {
            if(dp[0]>dp[1])
            {
                return dp[0];
            }
            else
            {
                return dp[1];
            }
        }
        for(int i=2;i<numsSize;i++)
        {
            int maxx = -1;
            for(int j=i-2;j>=0;j--)
            {
                if(dp[j]>maxx)
                {
                    maxx = dp[j];
                }
            }
//            printf("maxx = %d\n",maxx);
            if(maxx+nums[i]>dp[i-1])
            {
                dp[i] = maxx+nums[i];
            }
            else
            {
                dp[i] = dp[i-1];
            }
        }
        return dp[numsSize-1];
    //    printf("%d\n",dp[numsSize-1]);
    }
    return 0;
}