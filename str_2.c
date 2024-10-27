#include <stdio.h>
#include <string.h>

int main()
{
    char s[6] = "Hello";
    char s2[6] ;
    strcpy(s2, s);
    printf("%s\n",s);
    printf("%s",s2);
    return 0;
}