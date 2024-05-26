/*
step 1:understand the problem statement 
step 2:write algorithm
step 3:select the programing language
step 4:write the program
step 5:test the program
*/

//problem statement: Accept two number from user & perform addition

//step1:understand the problem statement 
//we conclude that the 2 numbers are of float type

//step 2:write algorithm
/*
start
    Accept first number from user and consider it as no1
    Accept second number from user and consider it as no2
    create one variable to store answer as ans
    stroe the result into answer
    diplay the value of ans as a result
stop
*/
//step 3:select the programing language
//we are going to write the code in c programming

//step 4:write the program


#include<stdio.h>


///////////////////////////////////////////////////////////////////
// 
//  Function Name :     Addition
//  Description :       It is used to perform addition of 2 floats
//  Input :             Float, Float
//  Output :            Float
//  Author :            Piyush Manohar Khairnar
//  Date :              15/04/2024
//
////////////////////////////////////////////////////////////////////


float Addition(float fNo1,float fNo2)
{
    float fAns;
    fAns=fNo1+fNo2;
    return fAns;
}

////////////////////////////////////////////////////////////////////
// Function name :      main
// Description :        Its a entry point function
////////////////////////////////////////////////////////////////////


int main(){
float fValue1=0.0,fValue2=0.0;
float fResult=0.0;

printf("Enter the first number:\n");
scanf("%f",&fValue1);

printf("Enter the second number:\n");
scanf("%f",&fValue2);

fResult=Addition(fValue1,fValue2);

printf("Addition is : %f\n",fResult);
    
return 0;

}

// Step 5 : Test the program
// Test case
// Input 1 = 10.0  Input 2 = 20.0   Result = 30.0
// Input 1 = 10.0  Input 2 = 0.0   Result = 10.0
// Input 1 = 0.0  Input 2 = 10.0   Result = 10.0
// Input 1 = 0.0  Input 2 = 0.0   Result = 0.0
// Input 1 = 10.0  Input 2 = -7.0   Result = 3.0
// Input 1 = -10.0  Input 2 = -7.0   Result = -17.0