#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
int main(void)
{
    int n;
    while(cin>>n)
    {
        if(n==1)
        {
            printf("%d\n",1);
            continue;
        }
        int tianzhang = 1;
        int flag = 0;//初始化设置为涨天
        int init = 1;
        int i = 1;
        while(1)
        {
            if(flag == 0)
            {
                int j = 0;
                while(j<tianzhang)
                {
                    j += 1;
                    i += 1;
                    init += 1;
                    if(i==n)
                    {
                        //init++;
                        break;
                    }
                }
                if(i==n)
                {
                    break;
                }
                tianzhang += 1;
                flag = 1;
            }
            else
            {
                i++;
                init--;
                if(i==n)
                {
                    
                    break;
                }
                flag = 0;
            }
        }
        printf("%d\n",init);
    }
}
