#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);

    if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u' )
    {
        printf("%c is a vowel", ch);
    }
    else
    {
        printf("%c is a constant", ch);
    }

    return 0;
}