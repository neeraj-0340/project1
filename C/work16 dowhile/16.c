#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("enter the number");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid.\n");
            break;
        }
    } while (n < 1 || n > 7 );

    return 0;
}