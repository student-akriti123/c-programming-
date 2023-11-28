#include<stdio.h>
int main()
{
  int a;
  printf("Enter the value a\n");
  scanf("%d",&a);

  if(a%2==0||a%3==0)
{
    printf("you are nice person");
}

else
{
   printf("you are not a gentle person");
}

return 0;
}
