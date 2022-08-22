
#include<stdio.h>
void naturalno(int);
int main()
{
       int n;
       printf("ENER A NUMBER: \n");
       scanf("%d",&n);
       naturalno(n);
       return 0;
}
void naturalno(int x)
{
       int i;
       printf("given %d odd natural number are: \n",x);
       for(i=1;i<=x;i++)
       {
              printf("%d",2*i-1);
              printf("\n");
       }
}
