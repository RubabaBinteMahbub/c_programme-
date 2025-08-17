#include<stdio.h>
int main()
{
int x,y;
char op;
printf("Enter two numbers :\n");
scanf("%d%d",&x,&y);
printf("Enter the operator :");
scanf(" %c",&op);
switch(op){
case '+' : printf("%d+%d=%d",x,y,x+y); break;
case '-' : printf("%d-%d=%d",x,y,x-y); break;
case '*' : printf("%d*%d=%d",x,y,x*y); break;
case '/' : printf("%d/%d=%d",x,y,x/y); break;
default : printf("Incorrect operator");
}
return 0;
}
