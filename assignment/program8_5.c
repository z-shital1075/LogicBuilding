//Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 Square meter)

//Input:5
//Output:0.464515

//Input:7
//Output:0.650321

#include<stdio.h>
double sqftTosqm(float sqft)
{
float sqm=sqft*0.0929;
return sqm;
}
int main(){
  
  float iValue=0.0;
  double fRet=0.0;
  printf("Enter area in sqft:\n");
  scanf("%f",&iValue);
 
 fRet= sqftTosqm(iValue);
  printf("%f",fRet);



  return 0;

}







