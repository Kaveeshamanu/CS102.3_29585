#include <stdio.h>
int main()
{
     //declaring varriables
     char stname[10];
     int byear,age;
     //input student name & birth year
     printf("Enter Student Name :");
     scanf("%s",&stname);
     printf("Enter Birth year : ");
     scanf("%d",&byear);
     age=2023-byear;
     printf("Student name :%s \n",stname);
     printf("The Age : %d",age);
}

