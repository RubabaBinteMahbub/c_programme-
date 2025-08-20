#include<stdio.h>
int main()
{
int a,b;
printf("Enter the value of a:\n"); 
scanf("%d", &a);
printf("Enter the value of b:\n");
scanf("%d", &b);

if(a==b){
     printf("Numbers are equal.\n");
}
else{
    printf("Numbers are not equal.\n");
}
return 0;
} 
