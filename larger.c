#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter three numbers");
scanf("%d%d",&a&b&c);
if(a>b)
{
if(a>c)
{
printf("a");
}
else
{
printf("c");
}
elseif(b>c)
{
print("b");
}
else
{
printf("c");
}
if(a>=b&&a>=c)
{
printf("a is larger");
}
if(b>=a&&b>c)
{
printf("b is larger");
}
if(c>=a&&c>=b)
{
printf("c is larger");
}
return 0;
}
