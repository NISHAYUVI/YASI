#include<stdio.h>
int main()
{
    int i,j,s;
    scanf("%d %d",&i,&j);
    i=i^j;
    j=i^j;
    s=i^j;
    printf("\n enter the number");
    printf("%d %d",i,j);
    return 0;
}
