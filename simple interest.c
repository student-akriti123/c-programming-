#include<stdio.h>
int main()
{
 int p;
 printf("Enter the value p\n");
 scanf("%d",&p);

 int r = 5;
 printf("Enter the value r\n");
 scanf("%d",&r);

 int t = 3;
 printf("Enter the value t\n");
 scanf("%d",&t);

 float simpleinterest = (p*r*t)/100;

 printf("Simple interest is %f",simpleinterest);

return 0;

}
