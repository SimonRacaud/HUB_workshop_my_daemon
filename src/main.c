/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main function
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

static int my_daemon(void)
{
    size_t i = 0;

    while (i < 100) {
       sleep(1);
       i++;
    }
    return EXIT_SUCCESS;
}

static int init_daemon(void)
{

    return EXIT_SUCCESS;
}

int main(void)
{

}
