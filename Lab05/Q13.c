#include <stdio.h>
int main()
{
 int sum , num1;
 while(num1 != -1){
 //enter user inputs
 printf("\n Enter number:");
 scanf("%d" ,&num1);
 sum = sum + num1;
 }
 printf("Sum of the entered inputs :%d" ,sum);
}
