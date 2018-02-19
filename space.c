#include<stdio.h>
int main() 
{
  char c[30]="Have A Good day";int i,count=0;
  for(i=0;i<30;i++)

    {
        if(c[i]==' ')
      count++;
    }
        if(count!=0)
       printf("%d spaces",count);

}
