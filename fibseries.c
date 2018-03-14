#include<stdio.h>
int main()
{
	int k,i,f1=0,f2=1,sum=0;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("%d", f2);
		sum=f1+f2;
		f1=f2;
		f2=sum;
	}
}
	
