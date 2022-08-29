/******************************************************************************
10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
function.
*******************************************************************************/

#include <stdio.h>
int series(int);
int fact(int);
int main()
{
    
    printf("Sum of series is :%d  ",series(5));

    return 0;
}
int series(int n)
{ int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=(fact(i)/i);
    }
    return sum;
}
int fact(int n)
{ int ans=1;
    for(int i=1;i<=n;i++)
    {ans*=i;}
    return ans;
}