#include<stdio.h>
int main(void)
{
    char empID [10];
    float wh  = 8;
    float sph = 15000;
    empID[0]='0';
    empID[1]='3';
    empID[2]='2';
    empID[3]='4';
    printf("input employee's ID %c%c%c%c", empID[0], empID[1], empID[2], empID[3]);
    printf("\n");
    printf("salary = %.2f\n", wh*sph);
    printf("\n");

}