//write a program which accept number from user nd display the difference between sum of non factors  & factors of that number

#include<stdio.h>

void NonFact(int iNo){
    int iCnt=0;
    int NonFactsum=0;
    int Factsum=0;
    int diff=0;
    
    for(iCnt=1;iCnt<iNo;iCnt++){
        if(iNo%iCnt!=0)
        {
          NonFactsum=NonFactsum+iCnt;

        }

        if(iNo%iCnt==0){
            Factsum=Factsum+iCnt;
        }
    
    }
    printf("sum of non factors:%d\n",NonFactsum);
    printf("sum of factors:%d\n",Factsum);
    diff=NonFactsum-Factsum;
    printf("difference:%d",diff);
   
}

int main(){
    int ivalue=0;
    printf("Enter the number:\n");
    scanf("%d",&ivalue);

    NonFact(ivalue);

}