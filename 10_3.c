 #include<stdio.h>
 int evenodd(int);
 int main()
 {
        int x,s;
        printf("ENTER A NATURAL NUMBER:  \n");
        scanf("%d",&x);
        s = evenodd(x);
        if(s==1)
              printf(" number is even.so, return value is %d ",s);
              else
                     printf(" number is odd. so, return value is %d",s);

 }
int evenodd(int a)
{
       if(a%2==0)
              return 1;
       else
              return 0;
}
