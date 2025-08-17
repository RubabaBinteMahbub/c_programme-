#include<stdio.h>
int main()
{
int i,a,b,sum=0;
printf("Enter the value of a :\n");
scanf("%d",&a);
printf("Enter the value of b :\n");
scanf("%d",&b);
for(i=a;i<=b;i++){
sum=sum+i;
}
printf("Sum=%d",sum);
return 0;
}
