#include <stdio.h>
int main()
{
    int i,j,n,k;
    printf("enter the number of rows :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}