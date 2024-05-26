//write code for count factors of a number

#include<stdio.h>
#include<stdbool.h>

 int countFactors(int iNo){
    int iCnt=0;
    int iCount=0;
    printf("Factors of %d are: \n", iNo);
    for(int iCnt=1;iCnt<iNo;iCnt++){

        if((iNo%iCnt)==0){
        iCount++;
    }
  }
  return iCount;
 }

int main(){

    int iValue=0, iRet=0;
    

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = countFactors(iValue);

    
     printf("Number of factors are: %d\n",iRet);
     return 0;
    
}