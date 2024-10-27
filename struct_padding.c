#include <stdio.h>
struct abc {
    char a;
    char b;
    int c;
}var;
#pragma pack(1) // we are using struct packing instead of padding
                //int this senario CPU cycles will be wasted but memory will be saved
                // hence the size will be 6 bytes of memory  
struct new {
    char a;
    int c;
    char b;
}var2;
int main()
{
    struct abc var;
    struct new var2;
    printf("%d\n", sizeof(var));
    printf("%d", sizeof(var2));
    return 0;
}