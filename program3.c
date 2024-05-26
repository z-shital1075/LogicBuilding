//take two input from user & add them
#include<stdio.h>
int main(){
    int iValue1,iValue2;
    int iResult;

    printf("Enter first number: \n");
    scanf("%d",&iValue1);

    printf("Enter second number: \n");
    scanf("%d",&iValue2);

    iResult=iValue1+iValue2;

    printf("Addition is:%d\n",iResult);
}