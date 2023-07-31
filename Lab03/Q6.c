#include <stdio.h>
int main()
{
 float ms,gmr,add,bslr,inc;
 char c[20];
 int syr;
 printf("Enter work city:");
 scanf("%s" , &c);
 printf("Monthly Sales:");
 scanf("%f" ,&ms);
 printf("Basic salary");
 scanf("%f" ,&bslr);
 printf("work service year:");
 scanf("%d" ,&syr);
 if(syr > 5)
 add=bslr*0.1;
 if(&c=Colombo)
 add+=2500;
 if(ms < 25000)
 inc=ms*0.1;
 if(ms < 50000)
 inc=ms*0.12;
 else(ms >= 50000)
 inc=ms*0.15;
 gmr=add+inc+bslr;
 printf("Employee's Gross Monthly Remuneration:%.2f \n",gmr);
}
