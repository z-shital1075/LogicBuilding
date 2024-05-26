//take input from user to print jay hanuman on screen by using while loop

#include<stdio.h>

void Display(int iNo){

    int iCnt=0;

    iCnt=1;             //1
    while(iCnt<=iNo)      //2     
    {
        printf("Jay Hanuman\n"); //4
        iCnt++;      //3
    }
}
int main(){

    int iValue=0;

    printf("Enter the number how many times you want to display jay hanuman:\n");
    scanf("%d",&iValue);

    Display(iValue);
   
    return 0;
}