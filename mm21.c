#include<stdio.h>
void main()
{
int c,a,d,sum=0,i,b;
scanf("%d,%d,%d\n",&c,&a,&d);
b=a;
for(i=1;i<=c;i++)
{
sum+=b;
b+=d;
} 
printf("%d\n",sum);
}
