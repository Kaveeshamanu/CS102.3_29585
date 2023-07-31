
#include <stdio.h>
int main()
{
 int num,x,result = 0;
 printf("Enter Positive Integer Number:");
 scanf("%d" ,&num);
 if(num == 0 || num == 1)
 result = 1;
 for(x = 2;x <= num / 2;++x){
 if(num % x ==0){
 result = 1;
 break;
 }
 }
 if(result == 0)
 printf("%d is a prime number" , num);
 else
 printf("%d is not prime number" , num);
}
