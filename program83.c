// input: 5
// output:5 4 3 2 1
//accept number from user nd print * n number of times on screen*****

#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    //   1       2       3
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
       printf("%d\t ",iCnt);  //4
       printf("*\t");
    }
}


int main()
{

int iValue=0;
printf("Enter the number:\n");
scanf("%d",&iValue);
Display(iValue);

    return 0;
}