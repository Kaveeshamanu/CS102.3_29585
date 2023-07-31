#include <stdio.h>
int main()
{
 char emp_name[10];
 float nslr,bslr,inc;
 printf("Enter Employee Name \n");
 scanf("%s",&emp_name);
 printf("Enter Your Basic Salary \n");
 scanf("%f",&bslr);
 if(bslr >= 10000)
 inc=bslr*0.15;
 else if(5000 <= bslr < 10000)
 inc=bslr*0.1;
 else(bslr < 5000);
 inc=bslr*0.05;
 //output employee name and new salary
 nslr=bslr+inc;
 printf("Employee Name: %s \n",emp_name);
 printf("New Slaray: %.2f \n",nslr);
}

