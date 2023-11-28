//Any year is input through the keyboard.Write a program to determine whether the year is a leap year or not.
#include<stdio.h>
int main()
{
  int a;
  printf("Enter the value a\n");
  scanf("%d",&a);

  if(a%4==0)
  {
     printf("The year is leap year");
  }

  if(a%4!=0)
  {
     printf("The year is not a leap year");
  }

return 0;
}
