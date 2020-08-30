#include<stdio.h>

int main()
{
  int m,n;
  int i,j,k;
   printf("enter the no of rows");
   scanf("%d",&n);
   m=n;
   for(i=1;i<=n;i++)
   {
      
     for(j=1;j<=m-1;j++)
     {
        printf(" ");
     }
      for(k=1;k<=2*i-1;k++)
         {
            if(k==1||k==2*i-1||i==n)
            printf("*");
            else
              
                printf(" ");
              
          }
                m--;

                printf("\n");
          }
               return 0;
   }

     






   








