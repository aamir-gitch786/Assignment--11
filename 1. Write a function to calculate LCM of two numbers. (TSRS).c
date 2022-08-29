/******************************************************************************
1. Write a function to calculate LCM of two numbers. (TSRS)
*******************************************************************************/

#include <stdio.h>
int LCM(int,int);//function declaration
int main()
{
    int a,b;
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    printf("LCM of %d and %d is : %d",a,b,LCM(a,b));//function calling

    return 0;
}
int LCM(int A,int B)
{ for(int i=1;i<=A*B;i++)
{
    if(i%A==0 && i%B==0)
    return i;
}
}