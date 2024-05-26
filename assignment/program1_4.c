#include<stdio.h>
#include<stdbool.h>
 bool Divisible(int iNo)
   { 
      if(iNo%5==0)
      {
        return true;
      }
      else
      {
        return false;
      }
   }
int main(){
   
   int iValue=0;
   bool bRet=false;
   printf("Enter the number:\n");
   scanf("%d",&iValue);

   bRet=Divisible(iValue);
   if(bRet==true)
   {
    printf("the given number is divisible by 5");
   }
   else
   {
    printf("the given number is not divisible by 5");

   }
    return 0;
}