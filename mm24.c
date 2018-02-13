#include<stdio.h>
void main()
{
int n,t=0,i,j,b[20];
printf("enter the array of numbers");
scanf("%d",&n);
printf("enter the numbers");
for(i=0;i<=n;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(b[i]>b[j])
{
t=b[i];
b[i]=b[j];
a[j]=t;
}
}
}
for(i=0;i<=n;i++)
{
    printf("%d",b[i]);
}
}
