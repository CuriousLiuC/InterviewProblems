#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int nan[1000005];
int nv[1000005];
int main(void)
{
	int n;
	memset(nan,0,sizeof(nan));
	memset(nv,0,sizeof(nv));
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&nan[i]);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&nv[i]);
	}

	for(int i=0;i<n;i++)
	{
		printf("%d\n",nan[i]);
		printf("%d\n",nv[i]);
	}

}
