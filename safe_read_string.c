#include "safe_read_string.h"
#include "malloc.h"
#include "errno.h"
#include "string.h"
_Bool noslashn(char *c, size_t n)
{
    for(size_t i=0; i<n; i++)
    {
        if(c[i]=='\n')
            return 0;
    }
    return 1;
}
char *saferead ()
{
    size_t n=10;
    char *str=malloc(10*sizeof(char));
    char *curstr=str;
    char* nl;
    while((fgets(curstr, 10, stdin))&&(!(nl=strchr(curstr, '\n'))))
    {
        n+=9;
        str=realloc(str, n*sizeof(char));
        curstr+=9;
    }
    if(errno)
    {
        free(str);
        char* ch=NULL;
        return ch;
    }
    if(nl)
        *nl='\0';
    return str;
}
