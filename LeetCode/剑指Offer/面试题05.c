char* replaceSpace(char* s){
    char *str;
    str = (char *)malloc(sizeof(char)*10005);
    int js = 0;

    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
        {
            str[js++] = '%';
            str[js++] = '2';
            str[js++] = '0';
        }
        else
        {
            str[js++] = s[i];
        }
    }
    str[js] = '\0';
    return str;
}