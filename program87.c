
//input:5
//output: A B C D E

#include<stdio.h>

void Display(int iNo){
    int iCnt=0;
    char ch='A';

    for(iCnt=1;iCnt<=iNo;iCnt++,ch++){
        
        printf("%c\t",ch);
        
    }
}


int main(){

int iValue=0;
printf("Enter the number:\n");
scanf("%d",&iValue);

Display(iValue);


}