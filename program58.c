/*

*/

#include<stdio.h>

void OddDisplay(int iNo){
   if(iNo<0){
    iNo=-iNo;
   }
   int iDigit=0;
    while (iNo>0){
    
     iDigit=iNo%10;
     iNo=iNo/10;
     if(iDigit%2!=0)
      
      {
     printf(" odd digits are:\n%d\n",iDigit);
     }
    
    }

}

int main(){

    int iValue=0;
    
    printf("enter the number:\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);
    
    return 0;

}