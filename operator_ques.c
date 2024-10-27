#include<stdio.h>
/*
    remember becoz of short circuit the expression (b++) will not 
    be evaluated . And after the completion of second expression 
    the value of b will be decremented by 1 finally making b = 0;
*/

int main()
{
    int a = 1;
    int b = 1;
    int c = ++a || b++;
    int d = b-- && --a;
    printf(" %d %d %d %d",d,c,b,a);
    return 0;
}