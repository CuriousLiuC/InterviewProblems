int lengthOfLIS(int* nums, int numsSize){
    if(numsSize==0)
    {
        return 0;
    }
    int dp[numsSize];
    memset(dp,0,sizeof(dp));//每个位置的最小 最长上升子列长度是1
    for(int i=0;i<numsSize;i++)
    {
        dp[i] = 1;
    }
    for(int i=1;i<numsSize;i++)
    {
        //往前找，找到一个比他小的数，「并且」dp最大的，加上去
        //往前找的过程可以使用二分查找
        int maxx = -1;
        for(int j=i-1;j>=0;j--)
        {
            if(nums[i]>nums[j])
            {
                //printf("nums[%d] = %d\n",j,nums[j]);
                if(dp[j]>maxx)
                {
                    maxx = dp[j];
                }
            } 
        }
        if(dp[i]<maxx+1)
        {
            dp[i] = maxx+1;
            //printf("%d\n",dp[i]);
        }
    }

    int newmax = -1;
    for(int i=0;i<numsSize;i++)
    {
        if(dp[i]>newmax)
        {
            newmax = dp[i];
        }
    }
    return newmax;
}