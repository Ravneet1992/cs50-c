#include<cs50.h>
#include<stdio.h>

int main(void)
{

    int x = get_int("x:");

   if(x>0)
    {
        printf("x is positive number\n");

    }
    else
        {
            printf("x is a negative number\n");
        }
}
