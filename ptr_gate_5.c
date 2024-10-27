#include<stdio.h>
//what will be the out put of the program ;
//GATE 2006 [2 Marks];
void swap(int *x , int *y)
{
    int *temp;
    temp = x;
    x = y;
    y = temp;
}
int printab()
{
    static int i, a = -3 , b = -6;
    i = 0;
    while(i <= 4)
    {
        if((i++)%2 == 1) continue;
        a = a + i;
        b = b + i;
    }
    swap(&a ,&b);
    printf("a = %d , b = %d\n",a,b);
}
int main()
{
    printab();
    printab();
}
