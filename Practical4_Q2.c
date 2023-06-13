#include <stdio.h>
int main()
{
    int n1,n2;
    char opt;
    printf("Enter 1st value");
    scanf("%d",&n1);
    printf("Enter 2nd value");
    scanf("%d",&n2);
    printf("Enter the option:");
    scanf("%c",opt);

    switch(opt)
    {
        case'+':printf("Addition is %d \n",n1+n2);break;
        case'-':printf("Subtraction is %d \n",n1-n2);break;
        case'/':printf("Division is %.2f \n",(float)n1/n2);break;
        case'*':printf("Multiple is %d \n",n1*n2);break;
        default:printf("invalid Operator\n");
    }
}
