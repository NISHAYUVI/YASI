#include<stdio.h>
void main()
{
    int i,min,a[10],n;
    printf("\nenter the number ");
    scanf("%d",&n);
    min=a[0];
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
       }
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
     printf("%d\n the minimum number is,min);
     getch();
     }
    
    
