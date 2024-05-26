//write a program which accept number from user nd display sum of non factors of that number

#include<stdio.h>

void NonFact(int iNo){
    int iCnt=0;
    int mul=1;
    int isum=0;
    
    for(iCnt=1;iCnt<iNo;iCnt++){
        if(iNo%iCnt!=0)
        {
          isum=isum+iCnt;

        }
    
    }
    printf("sum of non factor is %d\n",isum);
}

int main(){
    int ivalue=0;
    printf("Enter the number:\n");
    scanf("%d",&ivalue);

    NonFact(ivalue);

}