#include <stdio. h>
int main ()
{
int j,c=0,b;
scanf("%d",&b); 
    for(j=2;j<=b/2;j++)
    {
        c=0;
        if(b%2==0)
        {
            c=1;
            break;
        }
    }
        if(c==0)
        {
            printf("prime number\n");
        }
        else
        {
            printf("not a prime number\n");
        }
    
    return 0;
}

	
