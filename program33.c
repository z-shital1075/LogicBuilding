#include<stdio.h>
#include<stdbool.h>

 void Display(int iNo){
    for(int iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        printf("%d\n",iCnt);
    }
 }

int main(){

    int iValue=0;
    bool bRet=false;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}