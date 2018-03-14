#include<stdio.h>
int main()
{
	int i=23,j=24,temp=0;
	temp=i;
	i=j;
	j=temp;
	printf(" AFTER SWAPPING i=%d j=%d",i,j);
}
