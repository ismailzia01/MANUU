//designing a simple calculator
// program using function pointer
#include <stdio.h>
#define A 3

float add(float a, float b){return a+b;}
float sub(float a, float b){return a-b;}
float mul(float a, float b){return a*b;}
float div(float a, float b){return a/b;}
int main()
{
    float (*ptr2func[A]) (float , float) ={add, sub, mul, div};
    int choice;
    float a,b;
    printf("Enter your choice : 0 for sum, 1 for sub, 2 for mul, 3 for div\n");
    scanf("%d",&choice);
    printf("Enter two number\n");
    scanf("%f %f",&a,&b);
    printf("%f",ptr2func[choice](a,b));
    return 0;
}
