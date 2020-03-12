#include <iostream>
#include <cstdlib>

using namespace std;


int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n;
		scanf("%d",&n);
		int count = 0;
		while(n--)
		{
			int x1,y1,x2,y2;
			scanf("%d%d%d%d",&x1,&y1,&x2,&y2);//这里给出的是1-100，注意角标数据的缩减
			//int m[105][105];
			//memset(m,0,sizeof(m));
			for(int i=1;i<=100;i++)
			{
				for(int j=1;j<=100;j++)
				{
					if(i>=x1&&i<=x2&&j>=y1&&j<=y2)
					{
						count++;
					}
				}
			}
		}
		printf("%d\n",count);
	}


}


