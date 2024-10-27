#include<stdio.h>
void fun1(int a , int b)
{
    int c;
    c = a; a = b; b = c;
}
void fun2(int *a, int *b)
{
    int c;
    c = *a; *a = *b; *b =c;
}
int main()
{
    int a = 4, b = 5, c = 6;
    fun1(a, b);
    fun2(&b, &c);
    printf("%d",c-a-b);
}
//GATE 2015;