int findRepeatNumber(int* nums, int numsSize){
    // for(int i=0;i<numsSize;i++)
    // {
    //     for(int j=i+1;j<numsSize;j++)
    //     {
    //         if(nums[j]==nums[i])
    //         {
    //             return nums[i];
    //         }
    //     }
    // }
    // return -1;
    //以上代码TLE
    int mark[100005];
    memset(mark,0,sizeof(mark));
    for(int i=0;i<numsSize;i++)
    {
        if(mark[nums[i]]!=0)
        {
            return nums[i];
        }
        mark[nums[i]] ++;
    }
    return -1;
}