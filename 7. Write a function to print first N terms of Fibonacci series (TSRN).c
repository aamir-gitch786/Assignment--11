/******************************************************************************
7. Write a function to print first N terms of Fibonacci series (TSRN)

*******************************************************************************/

#include <stdio.h>
void Fibonacci(int);
int main()
{
    int n;
    printf("Enter the value of N :");
    scanf("%d",&n);
    Fibonacci(n);

    return 0;
}
void Fibonacci(int N)
{ int a=-1,b=1,c;
  for(int i=1;i<=N;i++)
   {
    c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
   }
}