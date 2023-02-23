0x03. C - Debugging
README.md


#C - Debugging


#TASKS.


0. Multiple mains

mandatory

In most projects, we often give you only one main file to test with. For example, this main file is a test for a postitive_or_negative() function similar to the one you worked with in an earlier C project:


1. Like, comment, subscribe

mandatory

Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.


Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.

You do not have to compile with -Wall -Werror -Wextra -pedantic for this task.


2. 0 > 972?

mandatory

This program prints the largest of three integers.


3. Leap year

mandatory

This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.




0-main.c


#include "main.h"


/**

 * main - Test function for positive or negative

 * Return: 0

 */


int main(void)

{

        int i;


        i = 0;

        positive_or_negative(i);


return (0);

}



main.h


#ifndef MAIN_H

#define MAIN_H

#include <stdio.h>


void positive_or_negative(int i);

int largest_number(int a, int b, int c);

void print_remaining_days(int month, int day, int year);

int convert_day(int month, int day);


#endif



1-main.c


#include <stdio.h>


/**

 * main - causes an infinite loop

 * Return: 0

 */


int main(void)

{

        int i;


        printf("Infinite loop incoming :(\n");


        i = 0;


        /*while (i < 10)*/

        /*{*/

        /*        putchar(i);*/

        /*}*/


        printf("Infinite loop avoided! \\o/\n");


        return (0);

}


