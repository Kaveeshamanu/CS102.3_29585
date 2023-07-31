#include <stdio.h>
int main()
{
 int marks;
 int i,sum=0;
 float avg;
 for(i=0;i<10;i++){
 printf("Enter marks:");
 scanf("%d", &marks);
 }
 printf("Sum %d \n", sum);
 avg = sum / 10;
 if(avg>50){
 printf("Pass");
 }
 else{
 printf("Fail");
 }
}
