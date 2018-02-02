#include<stdio.h>
void main()
{
int a[max_size],size,i;
printf("\nEnter the array size ");
scanf("%d",&size);
for(i=0;i<=size;i++)
{
printf("\nEnter the array values ");
scanf("%d",&a[i]);
}
for(i=0;i<=size;i++)
{
printf("\n%dThe array values index value",a[i],i);
}
}
getch();
}

