#include<stdio.h>
int main()
{
float P,T,R,I ;
printf("Enter the value of principle in tk. :\n");
scanf("%f", &P);
printf("Enter time in years :\n");
scanf("%f", &T);
printf("Enter the value of rate :\n");
scanf("%f", &R);
I= P*T*R;
printf("Interest = %.2f tk.\n", I);
return 0;
}
