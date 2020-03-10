#include <iostream> 
#include <cstdlib>
#include <cstring>

using namespace std;
int main(void)
{
    char s[15];
    memset(s,0,sizeof(s));
	while(cin>>s)
    {
    	int len = strlen(s);
    	char b[15];
    	memset(b,0,sizeof(b));
    	int js = 0;
    	int i,j;
		for(i=0;i<=len;)
		{
			int flag = 1;
			for(j=i+1;j<=len;j++)
			{
				if(s[j]==s[i])
				{
					flag = 0;	
				}
				else if(s[j]!=s[i])
				{
					if(flag==1)
					{
						b[js++] = s[i];
					}
					i=j;
					break;
				}
			}
			i=j;
		}
		b[js] = '\0';
		if(strlen(b)!=0)
			printf("%s\n",b);
		else
		{
			printf("no\n");
		}
	}
}
