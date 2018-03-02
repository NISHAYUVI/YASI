#include<stdio.h>
int main(void)
{
int k,l;
printf("enter the firstnumber:");
scanf("%d",&k);
printf("enter the second number:");
scanf("%d",&l);
k=k-l;
l=k+l;
k=l-k;
printf("before swapping%d",k);
printf("after swapping%d",l);
return 0;
}
