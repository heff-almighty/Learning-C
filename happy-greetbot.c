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
    string location = get_string ("Where do you live %s?\n", name);
    printf("Wow, %s",location);
    printf(" is such a great spot! Thank you for answering my questions today. Be well, meat bag!\n");
}
