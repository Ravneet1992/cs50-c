#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int x = get_int("marks in math:");
    int y = get_int("marks in physics:");
    int z = get_int("marks in chemistry:");

    if ( (x<65 || y<55 || z<50 || (x+y+z)<180) && ((x+y)<140 || (x+z)<140)) {
        printf("Fail\n");
        } else {
        printf("pass\n");
    }

}