#include <stdio.h>
int main()
{
//char s[] = "geeks";
char *s  = "geeks";
printf("%lu", sizeof(s));
//s[0] = 'j';
printf("\n%s", s);
    return 0;
}