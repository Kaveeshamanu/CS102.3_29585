#include <stdio.h>
int main()
{
 int i,sum=0;
 printf("Enter Number : ");
 scanf("%d",&i);
 while(i !=0)
 {
 sum=sum+(i%10);
 i=i/10;
 }
 printf("Sum is %d",sum);
}

