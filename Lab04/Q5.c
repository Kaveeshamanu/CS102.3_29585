#include <stdio.h>
int main()
{
 int num;
 printf("The Month Number:");
 scanf("%d",&num);
 num<=12;
 switch(num)
 {
 case 1:
 case 3:
 case 5:
 case 7:
 case 8:
 case 10:
 case 12:
 printf("%d month: 31 days",num);break;
 case 4:
 case 6:
 case 9:
 case 11:
 printf("%d month: 30 days",num);break;
 case 2:
 printf("%d month: 28 days",num);break;
 //......
 default:printf("Invalid month number");break;
 }
}
