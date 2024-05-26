#include<stdio.h>

void FactRev(int iNo){
    int totalFactors=0;
    int iCnt=0;
    // for(iCnt=1;iCnt<iNo;iCnt++)
    // {
        
    //     if(iNo%iCnt==0)
    //     {
    //         totalFactors++;
          
    //     }
    // }
    for(iCnt=iNo;iCnt>=1;iCnt--){
         if(iNo%iCnt==0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main(){

    int ivalue=0;
    printf("Enter the number");
    scanf("%d",&ivalue);
    
    FactRev(ivalue);
    


    return 0;
}