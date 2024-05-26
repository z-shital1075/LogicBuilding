#include<stdio.h>
double RectangleArea(float fwidth, float fHeight)
{
      double area=0.0;
      area=fwidth*fHeight;
      return area;
}
int main()
{
  float ivalue1=0.0,ivalue2=0.0;
  double dRet=0.0;
  printf("enter height:\n");
  scanf("%f",&ivalue1);

  printf("enter width:\n");
  scanf("%f",&ivalue2);

  dRet=RectangleArea(ivalue1,ivalue2);

  printf("area of rectangle is:%f\n",dRet);
  
  return 0;

}