//reverse the digits

#include<stdio.h>
int ReverseDigit(int iNo){
    int iDigit=0;
    int iRev=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        iRev=(iRev*10)+iDigit;
        iNo=iNo/10;
    }
return iRev;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet=ReverseDigit(iValue);

    printf("Rverse number is : %d\n",iRet);
    
    return 0;
}