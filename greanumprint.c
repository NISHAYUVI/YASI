#include <stdio.h>
#include<string.h>
int main(void)
{
	char str1[20],str2[20];
	int s1,s2;
	printf("\nenter the  first string1:");
	scanf("%s",str1);
	printf("\nenter the second string2:");
	scanf("%s",str2);
	s1=strlen(str1);
	s2=strlen(str2);
	if(s1>s2)
		printf("\n%s",str1);
	else if(s2>s1)
		printf("\n%s",str2);
	else
		printf("\n %s",str2);
	return 0;
}
