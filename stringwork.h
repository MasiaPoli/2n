#ifndef STRING_WORK_H
#define STRING_WORK_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Является ли разделителем или концом, 0, если да, 1 , если буква*/
_Bool sw_check(char a);
/*До следующего разделителя - конца*/
char* next_next(char* a);
/*Считает число слов с буквы c*/
size_t number_beg(char* a, char c);
#endif // STRING_WORK_H
