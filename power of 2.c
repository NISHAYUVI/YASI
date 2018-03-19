#include<stdio.h>
int main()
{
	int k,power=2,a,s=1,i,num;
	printf("\nEnter number");
	scanf("%d",&num);
	k=num;
	while(k!=0)
	{
		k=k/10;
		a++;
	}
	for(i=0;i<a+1;i++)
	{
		s=s*power;
	}
	printf("\nThe nearest greatest power 2 for %d is %d",num,s);
}

  

