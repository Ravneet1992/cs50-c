#include<cs50.h>
#include<stdio.h>
/* This program tells you which number is bigger */
int main(void)

{
        // declaring variables
        int x = get_int("x:");
        int y = get_int("y:");

        // if x is smaller
        if(x<y)
        {
            printf("x is less than y\n");
        }
        // if x is greater
        else if(x>y)
        {
            printf("x is greater than y\n");
        }
        // if x and y are equal
        else
        {
            printf("x is equal to y\n");
        }

}