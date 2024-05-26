#include<stdio.h>
double CircleArea(float fRadius){
    double area;
    double  PI=3.14;
    area=PI*fRadius*fRadius;
    return area;
}
int main()
{
   float fValue=0.0;
   double dRet=0.0;
   printf("Enter the Radius:\n");
   scanf("%f",&fValue);
   dRet =CircleArea(fValue);

   printf("Area of circle is:%f\n",dRet);

    return 0;

}