#include<stdio.h>
void DisplayFactors(int iNo){
    int iCnt=0;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt==0)&&(iCnt%2==0))
        {  
            
            printf("%d\t",iCnt);
        }
    }
}
int main(){
    int iValue=0;
    printf("enter the number:\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    
}