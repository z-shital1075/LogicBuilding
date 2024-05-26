#include<stdio.h>

int Display(int iNo1,int iNo2){
    int Ans=0;
    if(iNo2>iNo1)
    {
        return -1;
    }
    Ans=iNo1/iNo2;
    return Ans;
}

int main(){
    int ivalue1=15,iValue2=5;
    int iRet=0;

    iRet=Display(ivalue1,iValue2);
    { 

        printf("the division of number is:%d",iRet);

    }
}