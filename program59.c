/*

*/

#include<stdio.h>
int icount=0;
int EvenCount(int iNo){
   if(iNo<0){
    iNo=-iNo;
   }
   int iDigit=0;
    while (iNo>0){
    
     iDigit=iNo%10;
     iNo=iNo/10;
     if(iDigit%2==0){
        icount++;
      
    }
    return icount;
    
    }
}


int main(){

    int iValue=0;
    int iRet=0;
    
    printf("enter the number:\n");
    scanf("%d",&iValue);

    iRet=EvenCount(iValue);
    printf("the even count is:%d\n");
    return 0;

}