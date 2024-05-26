#include<stdio.h>

int Calculate( int iAge){
    if((iAge>=0)&&(iAge<=4))
    {
        return 0;
    }
    else if((iAge>4)&&(iAge<=10)){
        return 900;
    }
    else if((iAge>10)&&(iAge<=50)){
        return 900;
    }
    else if(iAge>50){
        return 900;
    }
}


int main(){

int age=0, iRet=0;
printf("Enter the age:");
scanf("%d",&age);

iRet=Calculate(age);
printf("your ticket price is:%d\n",iRet);

}