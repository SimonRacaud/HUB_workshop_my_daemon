/*
** EPITECH PROJECT, 2020
** my_daemon
** File description:
** Created: 2020-04-27T19:29:38+02:00 | Author: simon
*/

#ifndef H_KEYLOGGER
#define H_KEYLOGGER

/*
* struct input_event {
*    struct timeval time;
*    unsigned short type;   // Type of event, we are looking for EV_KEY
*    unsigned short code;   // Key code in LKC standard (See bellow)
*    unsigned int value;    // 0 == released; 1 == pressed; 2 == repeated
* };
*/

struct kkey {
    unsigned short code;
    char *label;
};

#define SIZE_KEY_MAP 101

#endif
