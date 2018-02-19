#include<stdio.h>
int main()
{
    int k,l;
    printf("Befor swapping the values are:");
    scanf("%d %d",&k,&l);
    k=k^l;
    l=k^l;
    k=k^l;
    printf("After swapping the values are:%d %d",k,l);
}
