#include<stdio.h>
int main()
{
    int s,p,r;
    printf("\nenter the number");
    scanf("%d%d",&s,&p);
    r=s*p;
    if((r%2)==0)
    {
        printf(" even");
    }
    else
    {
        printf("odd");
    }
}
    
