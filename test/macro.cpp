#include<stdio.h>  
  
#define bIGGEST(x, y, z) ( (x > y && x > z) ? x : ( y > z) ? y : z )  
int main()  
{  
    int a, b, c;  
  
    printf("Enter 3 integer numbers\n");  
    scanf("%d%d%d", &a, &b, &c);  
  
    printf("biggest of 3 numbers is %d\n", bIGGEST(a, b, c));  
  
    return 0;  
}  
