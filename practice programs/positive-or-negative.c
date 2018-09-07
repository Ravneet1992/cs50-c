#include<cs50.h>
#include<stdio.h>

int main(void)
{

    int x = get_float2("x:");

    if(x>0)
        {
            printf("x is positive number\n");
        }
        else if (x<0)
        {
            printf("x is a negative number\n");
        }
        else
        {
            printf("x is neither positive nor negative\n");
        }
}
