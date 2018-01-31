#include<stdio.h>
int main()
{
 int a,b,i;
 
   printf("enter the numbers ");
   scanf("%d%d",&a,&b);
      printf("even number between %d%d :",a,b);
   for(i=a;i<b;i++)
{
    if(i%2==0)
    {
     printf("\n %d",i);   
    }
}
return 0;
}
