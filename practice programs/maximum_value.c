#include<stdio.h>
int main(void)
{
    int a = 25;
    int b = 35;
    int c = 15;
    int bigger = 0;

    if(bigger<a)
    bigger = a;

    if(bigger<b)
    bigger = b;

    if(bigger<c)
    bigger = c;

    printf("largest of three number = %d\n", bigger);


}