#include<stdio.h>
void main()
{
int a=-1,b=1,i,c,d;
scanf("%d",&c);
for(i=0;i<c;i++)
{
d=a+b;
printf("\n%d",d);
a=b;
b=d;
}}
