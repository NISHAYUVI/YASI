#include<stdio.h>
int main()
{
printf("enter the two intervals");
scanf("%d",&n);
scanf("%d",&k);
for(i=n;i<=k;i++)
{
c=0;
while(i>0)
{
i=i%0;
c++;
}
while(j>0)
{
n=j%10;
for(k=0;kc;k++)
{
s=s*n;
}
j=j/10;
}
if(s==i)
{
printf("%d"i);
}
}
return 0;
}
