#include <stdio.h>
int main()
{
    int i, j, k, n=5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(k=0;k<n-i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}