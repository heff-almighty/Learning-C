//Code to scan an input and out put message
//Chapter 1 in Headfirst Book
//I wrote this to help me better understand basic C

#include <stdio.h>
#include <stdlib.h>

int main()

{
    char fname[25];
    puts("Enter first name: ");
    scanf("%24s", fname);

    char sname[25];
    puts("Enter surname: ");
    scanf("%24s", sname);

    printf("Hello %s %s.\n\n", fname, sname);
}
