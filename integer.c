#include<stdio.h>
int main()
{
int n,k,sum=0,i,k;
printf("enter the integers");
scanf("%d",&n);
scanf("%d",&k);
int a[100];
l=n+k;
for(i=0;i<l;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
sum=a[i]+sum;
}
printf("%d",sum);
return 0;
}
