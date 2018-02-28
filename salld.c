#include<stdio.h>
int main()
{
int k,rem,sum=0;
printf("\nenter the number");
scanf("%d",&k);
while(k!=0)
{
rem=k%10;
k=k/10;
sum=sum+rem;
}
printf("sum = %d",sum);
return 0;
}
