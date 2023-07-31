
#include <stdio.h>
int main()
{
   float dt,tt,avgs;
   //input distance travelled & time taken
   printf("Enter Distance Travelled in meters: \n");
   scanf("%f",&dt);
   printf("Enter Time taken in seconds:");
   scanf("%f",&tt);

   avgs=dt/tt;
   printf("The Avarage speed is %2f ms^-1",avgs);
}
