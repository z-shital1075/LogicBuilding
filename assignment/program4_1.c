//write a program which accept number from user nd display multifaction of factors of that number

#include<stdio.h>

void mulFact(int iNo){
    int iCnt=0;
    int mul=1;
    for(iCnt=1;iCnt<iNo;iCnt++){
        if(iNo%iCnt==0)
        {
            mul=mul*iCnt;

        }
    
    }
     printf("the multiplication of factor is:%d",mul);
}

int main(){
    int ivalue=0;
    printf("Enter the number:\n");
    scanf("%d",&ivalue);

    mulFact(ivalue);

}