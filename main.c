#include<stdio.h>
#include"header.h"
int main()
{
        int a[2][2],b[2][2],c[2][2];

     int i,j;
     printf("enter the first matrix:");
     for(i=0;i<=1;i++)
         for(j=0;j<=1;j++)

             scanf("%d",*(a+i)+j);
         printf("enter the second matrix:");
     for(i=0;i<=1;i++)
         for(j=0;j<=1;j++)
             scanf("%d",*(b+i)+j);
             assignC(c);

}
