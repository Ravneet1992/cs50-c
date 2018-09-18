#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main(void)
{
    int rno = get_int("Please print your roll number ");
    string s = get_string("Please enter your name ");

    int x = get_int("what is your score in math:");
    int y = get_int("what is your score in chemistry:");
    int z = get_int("what is your score in computers:");

    int t = (x+y+z);
    float p = (float) (t/3);

    printf("\nroll number of student = %d\n", rno);

    printf("name of student = %s\n", s);

    printf("marks in math = %d\n", x);

    printf("marks in chemistry = %d\n", y);

    printf("marks in computer = %d\n", z);

    printf("total marks = %d\n", t);

    printf("percantage = %.3f\n", (float) p);


    if(p>=65)
        printf("first divison\n");
    else if(p>=45 && p<65)
        printf("second divison\n");
    else
        printf("third divison\n");
}