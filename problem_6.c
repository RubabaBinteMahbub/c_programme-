#include<stdio.h>
int main()
{
float length;
printf("Enter the length in centimeter:\n");
scanf("%f",&length);
printf("Length in meter = %.2f\n",length/100);
printf("Length in kilometer = %.2f\n",length/1000);
return 0;
}
