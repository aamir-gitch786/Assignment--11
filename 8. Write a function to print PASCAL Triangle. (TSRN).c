/******************************************************************************

8. Write a function to print PASCAL Triangle. (TSRN)

*******************************************************************************/

#include <stdio.h>
void pascal(int );
int fact(int);
int main()
{
    printf("Pascal Triangle :\n");
     pascal(6);
    

    return 0;
}
void pascal(int n)
{ int k;
    for(int i=1;i<=n;i++)
    { k=0;
        for(int j=1;j<=n+5;j++)
        {
            if(j>=7-i && j<=5+i)
            {
                if((i+j)%2!=0)
                {
                    printf("%d",fact(i-1)/(fact(i-1-k)*fact(k)));
                    k++;
                }
                else
                printf(" ");
            }
            else
            printf(" ");
            
        }
        printf("\n");
    }
    
}
int fact(int n)
{ int ans=1;
    if(n==0)
    {return 1;}
 for(int i=1;i<=n;i++)
  {
    ans*=i;
  }
  return ans;
}