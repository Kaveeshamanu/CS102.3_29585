#include <stdio.h>
int main()
{
 float rad,dm,cf,ar;
 printf("Enter the radius in meter =");
 scanf("%f",&rad);
 ar=(rad*rad)*3.14159;
 cf=(rad*2)*3.14159;
 dm=2*rad;
 printf("The Area is %.2f \n",ar);
 printf("The Circumference is %.2f \n",cf);
 printf("The Diameter is %.2f \n",dm);
}

