//addition of even digit
//addition of digits
//input=2345, output=6
//input=4567, output=10
#include<stdio.h>
int iCount=0;
int iSum=0;
int AdditionOfOddDigits(int iNo)
{
   int iDigit=0;
    while (iNo!=0)
    {
     iDigit=iNo%10;
     if(iDigit%2!=0){
     iSum=iSum+iDigit;
     }
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

    iRet=AdditionOfOddDigits(iValue);
    printf(" the addition of digits are:%d", iSum);

return 0;

}