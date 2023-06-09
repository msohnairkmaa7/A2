//Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
#include<stdio.h>
int main()
{
    float a,b;
    printf("enter the price in INR = ");
    scanf("%f",&a);
    b=a*76.23;
    printf("INR converted into USD is %0.2f\n",b);
}