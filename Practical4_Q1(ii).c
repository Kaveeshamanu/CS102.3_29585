#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    switch(num%2)
    {
        case 0 :printf(" an even");break;
        case 1 :printf("an odd");break;
        default:printf("%d invalid input");


    }
}

