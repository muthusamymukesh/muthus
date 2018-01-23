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
#include<stdio.h>
int main()
{
char a,b,c;

printf("enter");
scanf("%c %c %c",&a,&b,&c);

if ( a>=b && a<=c )
printf("%c large number",a);

if ( b>=a && b<=c )
printf("%c large number",b);

if ( c>=a && c<=b )
printf("%c large number",c);
return 0;
}
