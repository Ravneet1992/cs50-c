#include<stdio.h>
#include<cs50.h>
int main(void)
{
    char c = get_char("enter the grade:");

    if(c == 'E')
    printf("Excellent\n");

    else if(c == 'V')
    printf("Very good\n");

    else if(c == 'G')
    printf("Good\n");

    else if(c == 'A')
    printf("Average\n");

    else if(c == 'F')
    printf("Fail\n");

    else
    printf("Invalid grade\n");



}