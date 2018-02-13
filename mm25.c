##include<stdio.h>
#include<conio.h>
int main()
{
   int n,a[100],i,temp,j,l;
   printf("enter the count\nenter the elements");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(j=1;j<=n;j++)
   {
      for(l=j+1;l<=n;l++)
      {
        if(a[j]>=a[l])
        {
        temp=a[j];
        a[j]=a[l];
        a[l]=temp;
            
        }
      }
   
   }
     printf(" %d\t",a[j/2]);
}
