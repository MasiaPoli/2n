#include "stringwork.h"
_Bool sw_check(char a)
{
    if((a==' ')|| (a=='.')|| (a==',') ||(a==';') || (a==':') ||(a=='\0') ||(a=='?') ||(a=='!') || (a=='-'))
    {
        return 0;
    }
    return 1;
}
char* next_next(char* a)
{
    char* b=a;
    while(sw_check(*b))
    {
        b++;
    }
   return b;
}
size_t number_beg(char* a, char c)
{
    char* b=a;
    size_t ans=0;
    while(*b!='\0')
    {
        if(sw_check(*b))
        {
            if(*b==c)
            {
                ans++;
            }
            b=next_next(b);
        }
        else
        {
            b++;
        }
    }
    return ans;
}
