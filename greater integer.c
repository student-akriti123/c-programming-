#include<stdio.h>
int main()
{
  int a;
  printf("Enter the value a\n");
  scanf("%d",&a);

int b;
  printf("Enter the value b\n");
  scanf("%d",&b);

int c;
  printf("Enter the value c\n");
  scanf("%d",&c);

  if(a>b||a>c)
  {
     printf("a is greater than among another integer");
  }

  if(b>a||b>c)
  {
     printf("b is greater than among another integer");
  }

  if (c>b||c>a)
  {
     printf("c is greater than among another integer");
  }

  return 0;

  }

