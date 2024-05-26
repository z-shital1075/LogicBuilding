#include<stdio.h>
#include<stdbool.h>
// time Complexity=O(N)
 int SumFactors(int iNo){
    int iCnt=0;
    int iSum=0;

    printf("Factors of %d are: \n", iNo);


    for(int iCnt=1;iCnt<iNo;iCnt++){

        if((iNo%iCnt)==0)
        {
        iSum=iSum+iCnt;
    }
   }
   return iSum;
 }

int main(){

    int iValue=0;
    int iRet=0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet= SumFactors(iValue);
    printf(" sum of factor is %d\n:",iRet);

    return 0;
}