#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,sum=0,i,r;
printf("enter the number\n");
scanf("%d",&a);
c=a;
b=a;
for(i=0;c!=0;i++)
{
c=a%10;
}
while(a!=0)
{
r=a/10;
sum=sum+pow(r,i);
a=a%10;
}
if(b==sum)
printf("the number is armstrong");
else
printf("the number is not armstrong");
}



