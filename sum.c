#include<stdio.h>
#include<conio.h>
void main()
{

     int m[5], ele, flag=0,i;
     clrscr();
     printf("enter 5 elements :");
     for(i=0; i<5; i++)
        scanf("%d", &m[i]);
     printf("enter element to be search :");
     scanf("%d",&ele);
     for(i=0; i<5; i++)
     {
         if(ele==m[i])
         {
             flag=1;
             break;
         }
     }
        if(flag==0)
            printf("Element not found");
        else
            printf("Element found at location %d");
        getch();

}
