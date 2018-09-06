// author Rav Kor
#include<cs50.h>
#include<stdio.h>

int main(void)
{

  // declare two variables
  float x = get_float("x:");
  float y = get_float("y:");

  // print the value
  printf("%f times %f is %f\n", x, y ,x*y);

}