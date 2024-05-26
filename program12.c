/*crate a application for school to check wheather the student is fail or pass*/ 
#include<stdio.h>
#include<stdbool.h>

float DisplayResult(float fMarks){

    if((fMarks>=0.0f) &&(fMarks<35.0f))
    {
        return false;

    }
    else{
        return true;
    }
}

int main(){
    float fValue=0.0;
    bool bRet=false;

    printf("Enter your percentage:\n");
    scanf("%f",&fValue);

    bRet=DisplayResult(fValue);
    if(bRet==true){
        printf("student is pass in the exam");

    }
    else{
        printf("student is fail in the exam");
    }
}