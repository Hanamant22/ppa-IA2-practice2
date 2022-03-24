#include<stdio.h>
typedef struct _triangle 
{
float base,altitude,area;
}Triangle;
Triangle input_triangle()
{
  Triangle b;
  printf("Enter the input for triangle\n");
  scanf("%f%f\n",&b.base,&b.altitude);
  return b;
}
void find_area(Triangle*t)
{
  t->area=0.5*t->base*t->altitude;
}
void output(Triangle t)
{
  printf("area of triangle with base %f and with altitude %f is %f",t.base,t.altitude,t.area);
}
int main()
{
Triangle ABC = input_triangle();
find_area(&ABC);
output(ABC);
return 0;
}

