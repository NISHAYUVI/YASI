#include<stdio.h>
int main()
{
printf("enter the prime number of two intervals");
scanf("%d",&a);
scanf("%d",&b);
for(j=a;j<=b;j++)
{
for(i=2;i,=j/2;i++)
{
c=0;
if(j%i==0)
{
c=1;
}
}
if(c==0)
{
printf("%d",j);
}
}
return 0;
}
