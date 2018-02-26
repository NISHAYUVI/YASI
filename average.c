#include<stdio.h>
int main()
{
int a[50],avg,n,sum,i;
printf("Enter the value of n: ");
scanf("%d",&n);
printf("\nEnter the array values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum+=a[i];
}
avg=sum/n;
printf("\nThe average is: %d",avg);
}
