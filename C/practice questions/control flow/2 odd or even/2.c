#include <stdio.h>
int main()
{
    int n=0;
    printf("Enter  a number:");
    scanf("%d",&n);
    if(n%2==0)
      {
        printf("number is even");
      }
      else{
        printf("number is odd");
      }

      return 0;
  }