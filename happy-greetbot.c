#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string ("Hi, what's your name?\n");
    printf("Hello, %s\n", name);
    printf("It is nice to meet you.\n");
    string age = get_string ("Forgive me for asking but, what age are you?\n");
    printf("You do not look old enough to be %s!\n", age);
    printf("Whatever you're doing, its working. You look great!\n");
}
