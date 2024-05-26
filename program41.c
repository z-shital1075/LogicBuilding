//check weather the number is perfect number or not

/*
accept number as No
search all its factors
perform addition of all factors
if addition is same as No
then display as No is perfect number
otherwise print not perfect number

*/

#include<stdio.h>
#include<stdbool.h>

bool checkPerfect(int iNo){

    int iCnt=0,iSum=0;

    if(iNo<0){      //updater
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<=(iNo/2); iCnt++)

    if((iNo%iCnt)==0){
        iSum=iSum+iCnt;
    }
    if(iSum==iNo){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int iValue=0;
    bool bRet=false;

    printf("Enter number: \n");
    scanf("%d", &iValue);


    bRet=checkPerfect(iValue);
    if(bRet==true){
        printf("%d is perfect number\n",iValue);
    }
    else{
         printf("%d is not perfect number\n",iValue);

    }

  return 0;

}