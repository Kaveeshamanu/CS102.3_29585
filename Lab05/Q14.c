#include <stdio.h>
int main()
{
 int count=1,n1,p=0,n=0,z=0;
 while(count <= 10)
 {
 printf("Enter %d numbers :" ,count);
 scanf("%d" ,&n1);
 count++;
 if(n1 < 0){
 n += 1;
 }
 if(n1 > 0){
 p += 1;
 }
 if(n1 == 0){
 z += 1;
 }
 }
 printf("Positives : %d \n" ,p);
 printf("Negatives : %d \n" ,n);
 printf("Zeros : %d \n" ,z);
}
