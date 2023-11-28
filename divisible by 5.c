#include<stdio.h>
int main()
{
  int a;
  printf("Enter the value of a\n");
  scanf("%d",&a);

  if (a%5==0)
    {
       printf("The number is divisible by 5");
    }
   if(a%5!=0)
    {
      printf("The number is not divisible by 5");
    }

return 0;
}
