int countCharacters(char ** words, int wordsSize, char * chars){
    int mark[1005];
    int sum = 0;
    for(int i=0;i<wordsSize;i++)
    {
        memset(mark,0,sizeof(mark));
        for(int i=0;i<strlen(chars);i++)
        {
            mark[chars[i]]++;
        }
        int flag = 1;
        for(int j=0;j<strlen(words[i]);j++)
        {
            mark[words[i][j]]--;
            if(mark[words[i][j]]<0)
            {
                flag = 0;
            }
        }
        if(flag)
        {
            sum += strlen(words[i]);
        }
    }
    return sum;
}