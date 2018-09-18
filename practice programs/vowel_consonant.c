#include<stdio.h>
#include<cs50.h>
int main(void)

{
    char c = get_char("enter the alphabet:");

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'|| c == 'A' || c == 'E' || c == 'I' || c =='O' || c == 'U')
    printf("alphabet is vowel\n");
    else
    printf("alphabet is consonant\n");
}