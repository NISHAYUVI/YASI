#include<stdio.h>
int main()
{
	int k[10],i,max;
	for(i=0;i<10;i++)
	scanf("%d",&k[i]);
	max=k[0];
	for(i=0;i<10;i++)
	{
		if(k[i]>max)
		{
			max=k[i];
		}
	}
	printf("%d",max);
}
