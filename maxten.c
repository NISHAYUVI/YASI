#include<stdio.h>
#include<conio.h>
int main()
{
int i,max,a[10];
printf("Enter ten numbers:\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<10;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("\n maximum number is %d",max);
return 0;
}

