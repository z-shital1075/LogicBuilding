//input: 5
//output: 1 1 2  2 3  3 4 4 5 5
//input:5
//output:1*2*3*4*5*

#include<stdio.h>

void Display(int iNo){
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++){
        printf("%d\t %d*\t",iCnt,iCnt);
        
    }
    printf("\n");
}


int main(){

int iValue=0;
printf("Enter the number:\n");
scanf("%d",&iValue);

Display(iValue);


}