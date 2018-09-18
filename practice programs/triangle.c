#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int x = get_int("side x:");
    int y = get_int("side y:");
    int z = get_int("side z:");

    if(x==y &&y==z)
     printf("traingle is equilateral\n");

    else if(x!=y && y!=z)
     printf("triangle is scalene\n");

    else
     printf("triangle is isosceles\n");
}