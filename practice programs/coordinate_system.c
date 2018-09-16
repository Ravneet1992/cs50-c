#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int co1 = get_int("co1:");
    int co2= get_int("co2:");
    if(co1>0 && co2>0)
    printf("The coordinate points (%d,%d) lies in first quadrant\n", co1, co2);

   else if(co1<0 && co2>0)
    printf("The coordinate points (%d,%d) lies in second quadrant\n", co1, co2);

    else if(co1<0 && co2<0)
    printf("The coordinate points (%d,%d) lies in third quadrant\n", co1, co2);

    else if(co1>0 && co2<0)
    printf("The coordinate points (%d,%d) lies in fourth quadrant\n", co1, co2);

    else if(co1==0 && co2==0)
    printf("The coordinate points (%d,%d) lies in origin\n", co1, co2);



}