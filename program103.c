/*
o/p: @ @ @ @
     # @ @ @
     # # @ @ 
     # # # @ 

*/
#include<stdio.h>

void Display(int iRow, int iCol)
{ int i=0, j=0;

if(iRow!=iCol)
{
    printf("no of rows nd column should be same!!");
}
    
    for(i=1;i<=iRow;i++)//outer
    {
        for(j=1;j<=iCol;j++)//inner
        if(i>j)
        {
            printf("#\t");
        }
        else
        {
            printf("@\t",j);
        }
        printf("\n");
    }

}
int main(){
int iValue1=0,iValue2=0;
printf("Enter the no of rows:\n");
scanf("%d",&iValue1);

printf("Enter the no of columns:\n");
scanf("%d",&iValue2);

Display(iValue1,iValue2);

return 0;

}