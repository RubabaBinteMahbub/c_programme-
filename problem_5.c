#include<stdio.h>
int main()
{
float C, F;
printf("Temperature in celcius =\n");
scanf("%f", &C) ;
F=9/5*C + 32;
printf("Temperature in fahrenheit = %f\n",F);
return 0;
}
