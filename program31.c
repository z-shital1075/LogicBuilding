//check weather the number is divisible by 4

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo){
    
    if(iNo%4==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int iValue=0;
    bool bRet=false;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    bRet=CheckDivisible(iValue);

    if(bRet==0){
        printf(" %d is divisible by 4\n", iValue);
    }
    else{
        printf(" %d is not divisible by 4\n", iValue);
    }
    
return 0;

}