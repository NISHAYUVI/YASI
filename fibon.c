#include <stdio.h>
int main()
{
    int i, n, j = 0, k= 1,c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", j);
        c = j+ k;
        j= k;
        k= c;
    }
    return 0;
}

