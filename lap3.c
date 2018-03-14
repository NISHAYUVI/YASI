#include <stdio.h>
#include<string.h>
int main(void) 
{
	char s[100];
	int n,i,m;
	scanf("%s",s);
	scanf("%d",&n);
	m=strlen(s);
	for(i=0;i<n;i++)
	{
		printf("%c",s[i]);
	}
	
	return 0;
}
