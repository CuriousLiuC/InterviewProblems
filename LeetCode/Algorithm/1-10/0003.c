int lengthOfLongestSubstring(char * s){
    bool mark[1005];
    int len = strlen(s);
    int maxx = 0;
    for(int i=0;i<len;i++)
    {
        memset(mark,0,sizeof(mark));
        mark[s[i]] = 1;
        int j = i+1;
        while(j<len)
        {
            if(mark[s[j]]==0)
            {
                mark[s[j]] = 1;
                j++;
            }
            else
            {
                break;
            }
        }
        if(j-i>maxx)
        {
            maxx = j-i;
        }
        //printf("thisround = %d\n",j-i);
    }
    return maxx;
}