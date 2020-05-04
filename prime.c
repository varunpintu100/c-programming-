#include<stdio.h>
void main()
{
int x,y=0,z,i;
printf("enter the number\n");
scanf("%d",&x);
for(i=0;i<=x;i++)
{
z=x%i;
if(z==0)
y++;
}
if(y==2)
printf("the number is prime");
else
printf("the number is not a prime");
