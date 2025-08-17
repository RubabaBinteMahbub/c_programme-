#include<stdio.h>
int main()
{
int x, y;
printf("Table of ");
scanf("%d",&x);
for(y=1 ; y<=10 ; y++)
{
printf("%d*%d=%d", x,y,x*y);
}
return 0;
}
