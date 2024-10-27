#include <stdio.h>
#pragma pack(1)
struct {
    double a;
    union {
        char b[4];
        double c;
        int d;
    }e;
    char f[4];
}s;
union {
    double a;
    struct {
        char b[4];
        double c;
        int d;
    }e;
    char f[4];
}u;
int main()
{
    printf("%d %d", sizeof(s), sizeof(u));
    return 0;
}