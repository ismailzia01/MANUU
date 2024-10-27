#include<stdio.h>
#include<limits.h>
int main()
{
    int val1=INT_MIN;
    int val2=INT_MAX;
    unsigned int val3=0;
    unsigned int val4=UINT_MAX;
    short int val5=SHRT_MIN;
    short int val6=SHRT_MAX;
    unsigned short int val9=0;
    unsigned short int val10=USHRT_MAX;
    long int val7=LONG_MIN;
    long int val8=LONG_MAX;
    printf("range of signed int is from %d to %d \n",val1,val2);
    printf("range of unsigned int is form %u to %u\n",val3,val4);
    printf("range of short int is from %d to %d\n",val5,val6);
    printf("range of unsigned short int is from %d to %d \n",val9,val10);
    printf("range of long int is from %d to %d\n",val7,val8);
    return 0;
}