#include<stdio.h>
#include<stdbool.h>

bool CheckNumber(int iNo){
    if(iNo<10){
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

    bRet=CheckNumber(iValue);

    if(bRet==true){
        printf("hello");
    }
    else{
     printf("Demo");
    }


}