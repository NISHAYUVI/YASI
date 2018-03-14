#include<stdio.h>
int main()
{
char ch[100];
int n,count=0;
scanf("%s",ch);
for(n=0;ch[n]!='\0';n++)
{
if((ch[n]>='a'&&ch[n]<='z')||(ch[n]>='A'&&ch[n]<='Z')||(ch[n]>='0'&&ch[n]<='9'))
{
	count++;
}
}
if(count!=0)
{
	printf("yes");
}
else
{
	printf("no");
	
}
return 0;
}
