#pragma once

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <termios.h>
#include <unistd.h>
#include "macros.h"

struct data_ll {
    int port;
    int b_rate;
    int timeout;
    int seq_number;
    int num_transfs;
    int frame_len;
    char frame[MAX_FRAME_SIZE]; // TODO !!!
}

struct data_ll ll;

int llopenReceiv(int fd);

int llopenTransmitt(int fd);

int llopen(int port, int type);

int llwrite(int fd, char * buffer, int length);