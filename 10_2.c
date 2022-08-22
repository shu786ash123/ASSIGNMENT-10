#include<stdio.h>
float SI(int,int,int);
int main()
{
       int a,b,c;
       float si;
       printf("ENTER PRINCIPAL,RATE AND TIME FOR CALCULATION OF S.I :    \n");
       scanf("%d%d%d",&a,&b,&c);
       si = SI(a,b,c);
       printf(" SIMPLE INTEREST IS %.2f",si);
       return 0;
}
float SI(int x,int y,int z)
{

       float m;
       m=(x*y*z)/100;
       return m;
}
