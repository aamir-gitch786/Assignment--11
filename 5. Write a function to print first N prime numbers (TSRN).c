/******************************************************************************
5. Write a function to print first N prime numbers (TSRN)

*******************************************************************************/
void first_prime(int);
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of N :");
    scanf("%d",&n);
    first_prime(n);

    return 0;
}
void first_prime(int n)
{ int compare=0,count;
    for(int i=1; ;i++)
    { count=0;
        for(int j=1;j<=i;j++)
        {
           if(i%j==0)
           count++;
        }
        if(count==2)
        {
            compare++;
            printf("%d ",i);
        }
        if(compare==n)
        break;
    }
}