/*crate a application for school to check wheather the student is fail or pass*/ 
#include<stdio.h>
#include<stdbool.h>

float DisplayResult(float fMarks){

if((fMarks<0.0f) ||(fMarks>100.0f))
    {
        printf("invalid input");
        return 1;

    }

    if((fMarks>=0.0f) &&(fMarks<35.0f));
    {
        return 2;

    }
    else{
        return 3;
    }
}

int main(){
    float fValue=0.0;
    int iRet=0;

    printf("Enter your percentage:\n");
    scanf("%f",&fValue);

    iRet=DisplayResult(fValue);
    if(iRet==1){
        printf("your input is invalid");

    }
    else if(iRet=2){
        printf("student is fail in the exam");
    }
    else if(iRet=3){
        printf("student is pass in the exam");
    }
    return 0;
}
/