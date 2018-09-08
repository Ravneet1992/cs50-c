#include<stdio.h>
int main(void)
{
    int days = 1329;
    printf("no of years = %d\n", days/365);
    printf("no of weeks = %d\n", ((days)-(365*3))/7);
    printf("no of days = %d\n", 234%7);
}