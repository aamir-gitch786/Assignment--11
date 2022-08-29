/******************************************************************************
6. Write a function to print all Prime numbers between two given numbers. (TSRN)

*******************************************************************************/

#include <stdio.h>
void between_prime(int,int);
int main()
{
    int a,b;
    printf("Enter the two values :");
    scanf("%d%d",&a,&b);
    between_prime(a,b);

    return 0;
}
void between_prime(int a,int b)
{ int count;
    for(int i=a+1; i<=b-1 ;i++)//because we have to fine between.
    { count=0;
        for(int j=1;j<=i;j++)
        {
           if(i%j==0)
           count++;
        }
        if(count==2)
        {
            printf("%d ",i);
        }
        
    }
}