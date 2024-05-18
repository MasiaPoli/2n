#include <stdio.h>
#include <stdlib.h>
#include "safe_read_string.h"
#include "stringwork.h"
int main()
{
    printf("Write a string\n");
   char* a=saferead();
   char c;
   printf("Write a character\n");
   scanf("%c", &c);
   int ans=number_beg(a, c);
   free(a);
   printf("%d", ans);
    return 0;
}
