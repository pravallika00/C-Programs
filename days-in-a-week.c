/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

******************************************************************/
#include<stdio.h>
int main()
{
    int day;
    scanf("%d",&day);
    switch(day)
    {
        case 1:printf("MONDAY");
        break;
        case 2:printf("TUESDAY");
        break;
        case 3:printf("WEDNESDAY");
        break;
        case 4:printf("THURSDAY");
        break;
        case 5:printf("FRIDAY");
        break;
        case 6:printf("SATURDAY");
        break;
        case 7:printf("SUNDAY");
        break;
        default:
        printf("name of the day");
    }
        return 0;
}
