
void assignC(int *c[2][2])
{
     int a[2][2],b[2][2];
     int i,j;
     printf("add elements:\n");
     for(i=0;i<2;i++)
     {
         for(j=0;j<2;j++)
         {
             *(*(c+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
             //printf("%d ",*(*(c+i)+j));
         }

     }
     printf("\n");
 }
