include<stdio.h>
int main()
{
int a;
scant("%d",&a);
if((a%400)==0)
printf("leap year");
else
printf("not leap year");
return 0;
