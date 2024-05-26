#include<stdio.h>

void Display(int ino1,int ifrequency){

for(int icnt=1;icnt<=ifrequency;icnt++){
    printf("%d\t",ino1);
}

}

int main(){
    int iValue1=0, iValue2=0;

    printf("Enter First number:\n");
    scanf("%d",&iValue1);

    printf("Enter second number:\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    
return 0;
}
