#include<stdio.h>
int main()
{
  int l;
  printf("Enter the value l\n");
  scanf("%d",&l);

   int b;
  printf("Enter the value b\n");
  scanf("%d",&b);

  int area = l*b;
  int perimeter = 2*(l+b);

  if(area<perimeter)
  {
      printf("perimeter is greater than area");
  }

  else{
    printf("area is greater than perimeter");
  }
  return 0;
}
