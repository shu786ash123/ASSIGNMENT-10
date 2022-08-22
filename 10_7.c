#include<stdio.h>
int add(int,int);
int main()
{
       int s,n,r;
       printf("ENTER ITEMS AND THEIR SELECTION: \n");
       scanf("%d%d",&n,&r);
       s = add(n,r);
       printf("number of combinations are :  %d \n\n",s);
       return 0;
}
int add(int a,int b)
{
       int i,c=1,d=1,e=1,m,p;
       for(i=1;i<=a;i++)
       {
              c = c*i;
       }
       for(i=1;i<=b;i++)
       {
              d = d*i;
       }
       m = a-b;
       for(i=1;i<=m;i++)
       {
              e = e*i;
       }
       p = c / (d*e);
       return p;
}
