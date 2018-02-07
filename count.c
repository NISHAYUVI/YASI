#include<stdio.h>
void main()
{
	int i,c=0;
	char k[100];
	for(i=0;i<=50;i++)
	{
		scanf("%c",&k[i]);
	}
	for(i=0;i<=k[i];i++)
	{
		if((k[i]>='a'&&k[i]<='z')||(k[i]>='A'&&k[i]<='Z'))
		{
		c++;
	}}
	printf("%d",c);
	getch();
}
