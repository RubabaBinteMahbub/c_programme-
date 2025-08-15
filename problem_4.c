#include<stdio.h>
int main()
{
float r, D, C, area;
const float pi = 3.1416;

printf("Enter the value of radius : \n");
scanf("%f",&r);

D=r*2;
C=2*pi*r;
area=pi*r*r;

printf("Diameter = %.2f\n",D);
printf("Circumference = %.2f\n",C);
printf("Area = %.2f\n",area);

return 0;
}
