//Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9))

//Input: 10

//Output: 12.2222 (1032) * (5/9)

//Input: 34

//Output: 1.11111 (34-32)* (5/9)

#include<stdio.h>

double FhtoCs(double fTemp)

{
    double celsius=0.0;
    celsius= ((fTemp -32) * (5.0/9.0));
    return celsius;

}



int main()

{

double fValue = 0.0;

double dRet = 0.0;

printf("Enter temperature in Fahrenheit:\n"); 
scanf("%lf",&fValue);

dRet = FhtoCs(fValue);

printf("temprature in celcius:%lf\n",dRet);

return 0;

}