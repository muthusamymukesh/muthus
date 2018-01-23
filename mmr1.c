#include<stdio.h>
int main()
{
char a;
printf("enter a");
scanf("%c",&a);
if((a>='A'&&a<='Z')||(a>='a'&&a<='z'))
printf("%calphabet",a);
else
printf("%cnot alphabet",a);
}
