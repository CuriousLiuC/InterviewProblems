#include <iostream>
#include <cstring>
#include <cstdlib>


using namespace std;
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int temp;
		int sum = 0;
		for(int i=0;i<5;i++)
		{
			scanf("%d",&temp);
			sum += temp;	
		}	
		if(sum==0)
		{
			printf("-1\n");
			continue;
		} 
		if(sum%5==0)
		{
			printf("%d\n",sum/5);
		}
		else
		{
			printf("-1\n");
		}
	}	
	return 0;
}
