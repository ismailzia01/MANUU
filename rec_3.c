#include<stdio.h>

void get(int n)
{
    if(n<1)
    return;
    get(n-1);
    get(n-3);
    printf("%d",n);
}
int main()
{
    get(6);
}
// get(6)
// get(5)
// get (4)...get(0)