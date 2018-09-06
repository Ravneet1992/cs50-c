#include<cs50.h>
#include<stdio.h>

int main(void)
{
    char ch = get_char("character:");

    printf("ASCII value of character %c = %d\n" , ch , ch);
}