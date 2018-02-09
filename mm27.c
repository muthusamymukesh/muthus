#include<stdio.h>

void main()
{
   char a;
   printf("Enter the value:");
   scanf("%c",&a);
   if(a>='A' && a<='Z'||a>='a' && a<='z')
   {
       printf("%c is not numeric.");
   }
   else
   {
printf("%c is numeric.");
}}
