#include<stdio.h>
float area(int);
int main()
{
       int r;
       float A;
       printf("ENTER RADIUS OF CIRCLE\n");
       scanf("%d",&r);
       A = area(r);
       printf(" AREA OF CIRCLE IS %.2f\n",A);
       return 0;

}
       float area(int a)
       {
       float b;
       b = 3.14*a*a;
       return b;
}
