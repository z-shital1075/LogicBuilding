/*

*/

#include<stdio.h>
int iCount=0;
int countDigits(int iNo){
   if(iNo<0){
    iNo=-iNo;
   }
   int iDigit=0;
    while (iNo!=0){
    
     iDigit=iNo%10;
     
     iNo=iNo/10;
     iCount++;
    }

    return iCount;

}

int main(){

    int iValue=0;
    int iRet=0;
    printf("enter the number:\n");
    scanf("%d",&iValue);

    iRet=countDigits(iValue);
    printf(" the number of digits are:%d", iRet);




return 0;

}