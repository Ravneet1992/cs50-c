#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
    string s = get_string("enter a secret message ");

    for (int i=0; i<strlen(s); i++)
    {
        //printf("%c\n",s[i]);
        printf("%d ",s[i]);
    }
        printf("\n");
    //printf("%s\n",s);
    //printf("the lenght of your message is %d\n", (int) strlen(s));
}