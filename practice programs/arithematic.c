#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int  x= get_int("Please enter the value of x = ");
    int y = get_int("Please enter the value of y = ");

    printf("%i plus %i is %i\n", x, y, x+y);
    printf("%i minus %i is %i\n", x, y, x-y);
    printf("%i times %i is %i\n", x, y, x*y);
    if (y != 0)
    {
        printf("%i divided by %i is %.1f\n", x , y , (float) x/y);
    }
}