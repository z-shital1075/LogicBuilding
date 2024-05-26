#include<stdio.h>
int count(int iNo)
{
 int iDigit=0;
 int iCount=0;
 while(iDigit>0){
    iDigit=iDigit%10;
    if(iDigit>5){
        iCount++;
       }
     iNo=iNo%10;
    return iCount;
 }
}
int main(){

    int iValue=0;
    int iRet=0;
    printf("enter the number:\n");
    scanf("%d",&iValue);

    iRet=(iValue);
    printf("%d",iRet);

}