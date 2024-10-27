#include<stdio.h>
int fun();
int var=3; //Global variable
int main()
{
    int var=4; //local variable
    //also local to only this block and its inner block
    printf("%d\n",var);
    fun();
    return 0;
}
int fun()
{
    printf("%d\n",var);
}