#include<stdio.h>
#include<stdbool.h>

bool checkEven(int ino){
if(ino%2==0)
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

    bRet=checkEven(iValue);

    if(bRet==true){
        printf("it is even number\n");
    }
    else{
        printf("it is odd number");
    }

}