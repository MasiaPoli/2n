#ifndef SAFE_READ_STRING_H
#define SAFE_READ_STRING_H
#include "stdio.h"
_Bool noslashn(char *c, size_t n);
/*Возвращает считываемую строку str, на момент прихода - нулевой указатель*/
char *saferead ();
#endif // SAFE_READ_STRING_H
