int myAtoi(char * str){
    int len = strlen(str);
    int flag = 0;
    long long finall = 0;
    int flagfu = 0;
    for(int i=0;i<len;i++)
    {
        if(str[i]!=' '&&flag==0)
        {
            flag = 1;
            if(!((str[i]>='0'&&str[i]<='9')||str[i]=='-'||str[i]=='+'))
            {
                return 0;
            }
        }
        //开始进行转换 
        if(flag==1)
        {
            if(str[i]=='-'&&flagfu==0)
            {
                if(str[i+1]=='+')
                {
                    return 0;
                }
                flagfu = 1;
                continue;
            } 
            
            if(str[i]=='+'&&str[i+1]>='0'&&str[i+1]<='9')
            {
                continue;
            }
            else if(str[i]=='+'&&!(str[i+1]>='0'&&str[i+1]<='9'))
            {
                return 0;
            }

            while(str[i]>='0'&&str[i]<='9')
            {
                
                finall = finall * 10 + (str[i]-'0');
                if(flagfu==0)
                {
                    if(finall>=pow(2,31))
                    {
                        return pow(2,31);
                    }
                }
                else
                {
                    if(finall>=pow(2,31)+1)
                    {
                        return -pow(2,31);
                    }
                }
                i++;
            }
            break;
            // else
            // {
            //     if(flagfu==0)
            //     {
            //         if(finall>=pow(2,31))
            //         {
            //             return pow(2,31);
            //         }
            //         else
            //         {
            //             return finall;    
            //         }
            //     }
            //     else
            //     {
            //         if(finall>=pow(2,31)+1)
            //         {
            //             return -pow(2,31);
            //         }
            //         else
            //         {
            //             return -finall;
            //         }
            //     }
               
            // }
        }
       
    }
    if(flagfu==0)
    {
        if(finall>=pow(2,31))
        {
            return pow(2,31);
        }
        else
        {
            return finall;    
        }
    }
    else
    {
        if(finall>=pow(2,31)+1)
        {
            return -pow(2,31);
        }
        else
        {
            return -finall;
        }
    }
}
