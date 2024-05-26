//input:5
// output:
// & & & & &
//* * * * * 
//$ $ $ $ $ 


#include<stdio.h>

void Display(int iNo){
    int iCnt=0;

    for (iCnt=1; iCnt <= iNo; iCnt++)
    {
        printf("&\t");
    }
    printf("\n");
    for (iCnt=1; iCnt<= iNo; iCnt++){

        printf("*\t");

    }
    printf("\n");
    for (iCnt=1; iCnt<= iNo; iCnt++){

        printf("$\t");

    }

}

int main(){
int ivalue=0;
printf("Enter the number:\n");
scanf("%d",&ivalue);

Display(ivalue);

return 0;

}