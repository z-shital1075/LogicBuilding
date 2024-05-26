//write a program which accept number from user nd display non factors of that number

#include<stdio.h>

void NonFact(int iNo){
    int iCnt=0;
    int mul=1;
    printf("Non Factor of number is:\n");
    for(iCnt=1;iCnt<iNo;iCnt++){
        if(iNo%iCnt!=0)
        {
          printf("%d\n",iCnt);

        }
    
    }
}

int main(){
    int ivalue=0;
    printf("Enter the number:\n");
    scanf("%d",&ivalue);

    NonFact(ivalue);

}