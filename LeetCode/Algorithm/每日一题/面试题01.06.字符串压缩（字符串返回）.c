char* compressString(char* S){
    char *temps = (char *)malloc(50005*sizeof(char));
	temps[0]  = '\0';
	int js = 0;
	int i=0,j=0;

	for(i=0;i<strlen(S);)
	{
		int count = 1;
		temps[js++] = S[i];
		for(j=i+1;j<strlen(S);j++)
		{
			if(S[j]==S[i])
			{
				count ++;
			}
			else
			{
				break;
			}
		}
		//append count in str
		int x = count;
		int a[1005];
		int js2 = 0;
		memset(a,0,sizeof(a));
		while(x>0)
		{
			a[js2++] = x%10;
			x /= 10;
		}
		while(js2>0)
		{
			temps[js++] = a[--js2] + '0';
		}
		i = j;
	}
	temps[js] = '\0';
	//printf("lentemps = %d\n",strlen(temps));
    //printf("temps = %s\n",temps);
	if(strlen(temps)>=strlen(S))
	{
		return S;
	}
	else
	{
		return (char*)temps;
	}
}