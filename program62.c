//addition of digits
//input=2345, output=14
//input=4567, output=22
#include<stdio.h>
int iCount=0;
int iSum=0;
int AdditionOfDigits(int iNo)
{
   int iDigit=0;
    while (iNo!=0)
    {
     iDigit=iNo%10;
     iSum=iSum+iDigit;
     iNo=iNo/10;
    }
  return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter the number:\n");
    scanf("%d",&iValue);

    iRet=AdditionOfDigits(iValue);
    printf(" the addition of digits are:%d", iSum);

return 0;

}