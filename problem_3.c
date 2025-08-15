#include<stdio.h>
int main()
{
int days;
printf("Enter number of days :\n");
scanf("%d", &days );
printf("Given days in weeks : %d\n",days/7);
printf("Given days in years : %d\n",days/365);
return 0;
}
