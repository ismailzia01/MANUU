#include <stdio.h>
struct Ournode
{
    int x,y,z;
};
int main()
{
    struct Ournode p = { '1', '0', 'c'};
    struct Ournode *q = &p;//here q points to entire struct 
    printf("%c %c", *((char*)q+1), *((char*)q+2));//here we are typecasting at first it is pointing to a structure and after typecasting it is now pointing to a char
    return 0;
}