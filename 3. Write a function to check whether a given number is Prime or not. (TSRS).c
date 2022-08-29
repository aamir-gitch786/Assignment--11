/******************************************************************************
3. Write a function to check whether a given number is Prime or not. (TSRS)
*******************************************************************************/

#include <stdio.h>
int prime(int);//function declaration
int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    (prime(n))?printf("Yes"):printf("No");
    

    return 0;
}
int prime(int A)
{ int count=0;
    for(int i=2;i<=A;i++)
   {
       if(A%i==0)
       count++;
       
   }
   if(count==1)
   return 1;
   else
   return 0;
}