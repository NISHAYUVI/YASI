#include<stdio.h>
int main()
{
	int n,a=0;
	scanf("%d",&a);
	for(int i=0;i<10;i++)
	{
		if(a==i)
		{
			a++;
		}
	}
	if(a==1)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	return 0;
}
