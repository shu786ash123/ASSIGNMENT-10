#include<stdio.h>
void prime(int);
int main()
{
       int n;
       printf("ENTER A NUMBER:  \n");
       scanf("%d",&n);
       printf("ALL PRIME FACTORS OF A GIVEN NUMBER  %d  are:  \n ",n);
       prime(n);
       return 0;
}
void prime(int n)
{
       int i;
       for(i=2; n!=1;i++)
       {
              while(n%i==0)
              {

                            printf("%d ,",i);
                     n = n/i;
              }
       }
}
