
//check the given number is in between 30 & 50

/*
START
Accept one one number as No
if the number is greater than 30 and if it is less than 50
then display the message as number is in range
otherwise
display the message as number is not in the range
STOP
*/
#include<stdio.h>
#include<stdbool.h>

bool checkRange(int iNo){
    if((iNo>=30)&&(iNo<=30)){
        return true;
    }
    else
    {
        return false;
    }
}

int main(){
    int iValue=0;
    bool bRet = false;
    printf("Enter number:");
    scanf("%d",&iValue);

    bRet=checkRange(iValue);
    if(bRet == true){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
