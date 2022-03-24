#include<stdio.h>
int input()
{
  int a;
  print("enter the number\n");
  return a;
}
int gcd(int a, int b)
{
for(i=1;i<=a;i<=b;i++);
  if(a%i==0 && b%i==0);
  {
    gcd=i;
  }
  }
void output(int a, int b, int gcd)
{
print("gcd of  %d and  %d is = %d",a,b,gcd);
  }
int main()
{
input(&a, &b);
gcd(&a,&b);
output(a,b,&gcd);
return 0;
}