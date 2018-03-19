include <stdio.h>
int main()
{
	int i,j,k;
	printf("\n enter the values");
	scanf("%d %d",&i,&j);
	k=i+j;
	if(k%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
