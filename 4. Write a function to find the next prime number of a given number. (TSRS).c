/******************************************************************************
4. Write a function to find the next prime number of a given number. (TSRS)
*******************************************************************************/

#include <stdio.h>
int Next_prime(int);//function declaration
int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    printf("Next prime number of %d is : %d ",n,Next_prime(n));
    

    return 0;
}
int Next_prime(int A)
{ int i,count;
for(i=A+1;  ;i++)
  { count=0;//it check every value so we have to declare count zero in every iteration.
    for(int j=1;j<=i;j++)
    {
        if(i%j==0)
         {count++;}
    }
    if(count==2)
      {return i;}
  }
}