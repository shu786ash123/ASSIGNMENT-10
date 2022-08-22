#include<stdio.h>
int add(int,int);
int main()
{
       int x,y,s;
       printf("ENTER A  NUMBER:  \n");
       scanf("%d",&x);
       printf("ENTER A DIGIT:  \n");
       scanf("%d",&y);
       s = add(x,y);
       if(s==1)
              printf("DIGIT CONTAIN IN A  NUMBER");
       if(s==0)
              printf("DIGIT NOT CONTAIN IN A NUMBER");
              return 0;

}
int add(int a,int b)
{
       int rem;
       while(a!=0)
       {
              rem = a%10;

              if(rem == b)
                     return 1;
              a = a/10;

       }
       if(a==0)
              return 0;
}
