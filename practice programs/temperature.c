#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int temp = get_int("temperature:");

    if(temp<0)
    printf("freezing weather\n");

    else if(temp<10)
    printf("very cold weather\n");

    else if(temp<20)
    printf("cold weather\n");

    else if(temp<30)
    printf("normal in temperature\n");

    else if(temp<40)
    printf("hot weather\n");

    else
    printf("very hot\n");
}