//display 1 to 4
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
    printf(" the answer is: %d\n",iCnt);
    
    }
 }

int main(){

    int iValue=0;

    printf("Enter number of times you want to display on screen:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}