#include<stdio.h>
void main ()
{
    int i,max,a[10],n;
    printf("\nenter the number ");
    scanf("%d",&n);
    max=a[0];
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
       for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf(" %d\nthe maximum no is,max);
    getch();
    }
    
    
