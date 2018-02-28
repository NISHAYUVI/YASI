#include <stdio.h>
int main(void)
{
    int i, count = 0;
    printf("Enter the integer value: ");
    scanf("%d", &i);
    while(i != 0)
    {
        
        i/= 10;
        ++count;
    }
    printf("Number of digits: %d", count);
    return 0;
}
