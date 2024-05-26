#include<stdio.h>

void printEven(int iNo){

    if(iNo<=0)
    {
        return;
    }
    for(int iCnt=1;iCnt<=iNo;iCnt++)

    printf("%d\t",2*iCnt);


}

int main(){
    int iValue=0;
    printf("enter the number:\n");
    scanf("%d",&iValue);

    printEven(iValue);
    return 0;
}