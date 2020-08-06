/*
 *Program to evaluate face values and count cards in a game of blackjack
 *headfirst coding challenge - Chapter 1, page 57
 */

#include <stdio.h>
#include <stdlib.h>

int main()

{
    char card_name[3];
    puts("Enter the card name: ");
    scanf("%2s", card_name);
    int val=0;
    switch (card_name[0]) {

        case 'K':
        case 'Q':
        case 'J':
            val=10;
            break;
        case 'A':
            val=11;
            break;
        default:
            val=atoi(card_name);
    }

            /* check if the value is between 0 and  */
            if((val>=1)&&(val<=9))
                puts("Count has gone up, raise bet recommended.\n");

            /*Otherwise check if the card was 10, J, Q or K */
            else if(val==10)
                puts("Count has gone down, play it cool.\n");
                return 0;
}
