//Take two integers input, a and b: a>b, and find the reminder when a is divided by b.
#include<stdio.h>
int main()
{
 int a;
 printf("Enter the value a\n");
 scanf("%d",&a);

  int b;
 printf("Enter the value b\n");
 scanf("%d",&b);

 int q = a/b;

 int r = a-(b*q);

 printf("The reminder is %d",r);

return 0;
}
