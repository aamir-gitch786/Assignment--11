/******************************************************************************
2. Write a function to calculate HCF of two numbers. (TSRS)
*******************************************************************************/

#include <stdio.h>
int HCF(int,int);//function declaration
int main()
{
    int a,b;
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    printf("HCF of %d and %d is : %d",a,b,HCF(a,b));//function calling

    return 0;
}
int HCF(int A,int B)
{ int min,a;
min=(A>B)?B:A;
    for(int i=1;i<=min;i++)
   {
    if(A%i==0 && B%i==0)
    {
      a=i;  
    }
    
   }
   return a;
}