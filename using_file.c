#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("file1.txt", "w");
    if(fptr == NULL)
    printf("ERROR!");
    char str[100];
    printf("Enter the string :");
    scanf("%s",str);
    fprintf(fptr, "%s", str);
    fclose(fptr);
    return 0;
}