#include<stdio.h>

void Display(int iNo)
{
    for(int iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
    }

}

int main(){
    int ivalue=0;
    printf("enter the number:\n");
    scanf("%d",&ivalue);

    Display(ivalue);
}