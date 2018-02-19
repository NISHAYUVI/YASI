#include<stdio.h>
void main()
{
char k[100];
int temp=0;
scanf("%s",k);
for(int i=0;k[i]!='\0';i++)
{
if(k[i]=='.')
temp++;
}
printf("\n lines=%d",temp);
getch();
}
