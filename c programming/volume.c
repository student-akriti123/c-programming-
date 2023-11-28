#include<stdio.h>
int main()
{
    int r;
    printf("Enter the value of r\n");
    scanf("%d",&r);
    
    float v = 4*3.14*r*r*r/3;
    
    printf("The volume of a sphere is %f",v);
    return 0;
}
