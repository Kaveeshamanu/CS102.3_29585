#include <stdio.h>
int main()
{
 int n1, n2, n3, max, min;
 printf("Enter 3 numbers: ");
 scanf("%d %d %d", &n1, &n2, &n3);
 max = n3;
 if (max < n2)
 max = n2;
 if (max < n1)
 max = n1;
 printf("Largest value is %d\n", max);
 min = n1;
 if (min > n2)
 min = n2;
 if (min > n3)
 min = n3;
 printf("Smallest value is %d\n", min);
}
