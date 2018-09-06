#include<cs50.h>
#include<stdio.h>

int main(void)
{
    char ch = get_char("character:");

    if ( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') )
        printf(" character is an alphabet\n");
    else
        printf("character is not an alphabet\n");
}