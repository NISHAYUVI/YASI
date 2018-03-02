
#include <stdio.h>
#include<string.h>
int main()
{
	char n[50]="dear friends.please come to party";
	 int i,count=0;
	for(i=0;n[i]!='\0';i++)
	{
		if(n[i]=='.')
			count++;
	}
	printf("no. of lines are %d",count+1);
	return 0;
}


