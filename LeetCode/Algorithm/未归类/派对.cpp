#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdlib>
 
using namespace std;
int main(void)
{
    int T;
    scanf("%d",&T);
    //����һ��̰���㷨����Ŀ��
    while(T--)
    {
    	long long  a[5];
		scanf("%lld%lld%lld",&a[0],&a[1],&a[2]);
		sort(a,a+3);
		
		if(a[2]>2*(a[0]+a[1]))//ע��˱߽�ֵ���� 
		{
			printf("%lld\n",a[0]+a[1]);	
		} 
		else
		{
			printf("%lld\n",(a[0]+a[1]+a[2])/3); 
		} 
    }
    return 0;
}
