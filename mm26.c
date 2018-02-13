#include<stdio.h>
void main()
{
int n,r=0;
printf("enter the value:");
scanf("%d",&n);
while(n!=0)
{
re=r*10;
re=re+n%10;
n=n/10;
}
printf("the sorted array is:",r);
