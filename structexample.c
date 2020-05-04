#include<stdio.h>
struct employee{
int id,age;
char ename[30];
float esal;
};
void main()
{
struct employee x;
printf("enter employee id\n");
scanf("%d",&x.id);
fflush(stdin);
printf("enter employee name\n);
gets(x.ename);
printf("enter employee age\n");
scanf("%d",&x.age);
printf("enter employee salary\n");
scanf("%f",&x.esal);
}
