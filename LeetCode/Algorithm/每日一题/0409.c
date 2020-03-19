int longestPalindrome(char * s){
    int len = strlen(s);
    int mark[1005];
    memset(mark,0,sizeof(mark));  
    for(int i=0;i<len;i++)
    {
        mark[s[i]]++;
    }
    int count = 0;
    int flag = 0;
    for(int i='a';i<='z';i++)
    {
        if(mark[i]%2!=0)
        {   
            flag = 1;
            count ++;
        }
    }
    for(int i='A';i<='Z';i++)
    {
        if(mark[i]%2!=0)
        {   
            flag = 1;
            count ++;
        }
    }
    if(flag)
    {
        return len-count+1;
    }
    else
    {
        return len-count;
    }
    
}