#include <stdio.h>
int main()
{
 int base,exp,op=1;
 printf("Enter the Base Value:");
 scanf("%d" ,&base);
 printf("Enter the exponent:");
 scanf("%d" ,&exp);
 //checking operands are equal or not
 while(exp != 0){
 op *= base;
 --exp;
 }
 printf("The nth power is:%d" ,op);
}

