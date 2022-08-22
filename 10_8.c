
#include<stdio.h>
int add(int,int);
int main()
{
       int s,n,r;
       printf("ENTER ITEMS AND THEIR SELECTION: \n");
       scanf("%d%d",&n,&r);
       s = add(n,r);
       printf("NUMBER OF ARRANGEMENTS ARE :  %d \n\n",s);
       return 0;
}
int add(int a,int b)
{
       int i,c=1,e=1,m,p;
       for(i=1;i<=a;i++)
       {
              c = c*i;
       }

       m = a-b;
       for(i=1;i<=m;i++)
       {
              e = e*i;
       }
       p = c / e;
       return p;
}
