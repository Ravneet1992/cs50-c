#include<stdio.h>
#include<cs50.h>
int main(void)
{

    float m = get_float("m:");
    if(m>0)
    printf("n = 1\n");
    else if(m==0)
    printf("n = 0\n");
    else
    printf("n = -1\n");

}