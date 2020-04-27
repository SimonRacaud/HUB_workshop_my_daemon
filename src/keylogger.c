/*
** EPITECH PROJECT, 2020
** my_keylogger
** File description:
** Created: 2020-04-25T16:23:30+02:00 | Author: simon
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

#include <linux/input.h>

#include "keylogger.h"

extern const struct kkey KEY_MAP[];

void display_char(short int code)
{
    for (size_t i = 0; i < SIZE_KEY_MAP; i++) {
        if (KEY_MAP[i].code == code) {
            printf("\nKEY: %s\n", KEY_MAP[i].label);
            return;
        }
    }
    printf("\nUndefined Key %d has been pressed\n", code);
}

/*
* struct input_event {
*    struct timeval time;
*    unsigned short type;   // Type of event, we are looking for EV_KEY
*    unsigned short code;   // Key code in LKC standard (See bellow)
*    unsigned int value;    // 0 == released; 1 == pressed; 2 == repeated
* };
*/

int main(void)
{

    return EXIT_SUCCESS;
}
