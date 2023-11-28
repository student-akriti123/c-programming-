#include<stdio.h>
int main()
{

 int n;
 printf("Enter the value of n\n");
 scanf("%d",&n);

 int a=1;
 for(int i=0;i<=n;i++)
   {
       printf("%d\n",a);
       a = a*2;
   }

    return 0;
    }
