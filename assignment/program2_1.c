#include<stdio.h>

void Display(int iNo){
    for(int iCnt=1;iCnt<=iNo;iCnt++){
        printf("*\t");
    }
}

int main(){

    int iValue=0;
    printf("enter the number:\n");
    scanf("%d",&iValue);

    Display(iValue);

}

