/*

*/

#include<stdio.h>

void EvenDisplay(int iNo){
   if(iNo<0){
    iNo=-iNo;
   }
   int iDigit=0;
    while (iNo>0){
    
     iDigit=iNo%10;
     iNo=iNo/10;
     if(iDigit%2==0)
      
      {
     printf("%d\n",iDigit);
     }
    
    }

}

int main(){

    int iValue=0;
    
    printf("enter the number:\n");
    scanf("%d",&iValue);

    EvenDisplay(iValue);
    
    return 0;

}