#include<stdio.h>
#include<stdbool.h>

bool checkPrime(int iNo){

    int iCnt=0,iCount=0;

    if(iNo<0){      //updater
        iNo=-iNo;
    }

    for(iCnt=2;iCnt<=(iNo/2); iCnt++){

        if(iNo%iCnt==0){
            iCount++;
            break;
        }
    }
if(iCount==0)
    {
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


    bRet=checkPrime(iValue);
    if(bRet==true){
        printf("%d is prime number\n",iValue);
    }
    else{
         printf("%d is not prime number\n",iValue);

    }

  return 0;

}