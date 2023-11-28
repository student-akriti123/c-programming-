#include<stdio.h>
int main()
{
 int a;
 printf("Enter the value a\n");
 scanf("%d",&a);

 if(a<0)
 {
    a=a*(-1);
    printf("The absolute value is:%d",a);
 }

 if(a>0)
 {
     printf("The absolute value is:%d",a);
 }

 return 0;
}
