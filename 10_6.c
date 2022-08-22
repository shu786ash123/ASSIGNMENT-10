#include<stdio.h>
int fact(int);
int main()
{
       int s,x;
       printf("ENTER A NUMBER:  \n");
       scanf("%d",&x);
       s = fact(x);
       printf("FACTORIAL OF GIVEN NO. %d is:  %d",x,s);
       return 0;

}
int fact(int a)
{
       int m=1,i;
       for(i=1;i<=a;i++)
       {
              m = m*i;
       }
       return m;
}
