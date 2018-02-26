#include<stdio.h>
int main()
{
int i,j,n=4,a[4],temp=0,max,min;
printf("Enter the number");
scanf("%d",&n);
for(i=0;i<4;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<4;i++)
    {
    for(j=i+1;j<4;j++)
    {
        if(a[i]>a[j])
        {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    }
}
}
max=a[2];
printf("%d",max);
min=a[0];
printf("%d",min);
return 0;
}
