// write a code for factorial of given number

#include<stdio.h>

int Factorial(int iNo)
{
   int iCnt=0;
   unsigned long int iFact=1;
   iCnt=1;
   while(iCnt<=iNo)
    {
         iFact=iFact*iCnt;
         iCnt++;
    }
    return iFact;
}

int main()
{
    int iValue=0;
    unsigned long int iRet=0;
    printf("enter the number:\n");
    scanf("%lu", &iValue);

    iRet=Factorial(iValue);

    printf("Factorial of the number is :%lu\n",iRet);
    return 0;
}