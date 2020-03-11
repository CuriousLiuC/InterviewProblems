class Solution {
public:
    bool isValid(string s) {
         stack <char> a;
        char *str = (char*)s.c_str();
        int len = strlen(str);
        for(int i=0;i<len;i++)
        {
            if(str[i]=='(')
            {
                a.push('(');
                continue;
            }
            if(str[i]=='[')
            {
                a.push('[');
                continue;
            }
            if(str[i]=='{')
            {
                a.push('{');
                continue;
            }

            if(str[i]=='}'&&a.size()!=0)
            {
                if(a.top()=='{')
                    a.pop();
                else
                {
                    a.push('}');
                }
            }
            else if(str[i]=='}'&&a.size()==0)
            {
                return false;
            }
            if(str[i]==']'&&a.size()!=0)
            {
                if(a.top()=='[')
                    a.pop();
                else
                {
                    a.push(']');
                }
            }
            else if(str[i]==']'&&a.size()==0)
            {
                return false;
            }
            if(str[i]==')'&&a.size()!=0)
            {
                    if(a.top()=='(')
                    a.pop();
                    else
                    {
                        a.push(')');
                    }
            }
            else if(str[i]==')'&&a.size()==0)
            {
                return false;
            }
        }
        if(a.size()==0)
        {
            return true;
        }
        else
        {
            return false;
        }  
    }
};
