#include<stdio.h>
#include<cs50.h>
int main(void)

{
    char c = get_char("Enter the character:");

    if((c>='a' && c<='z') || (c>='A' && c<='Z'))
    printf("The character is an alphabet\n");

    else if(c>='0' && c<= '9')
    printf("The character is a digit\n");

    else
    printf("is a special character\n");
}