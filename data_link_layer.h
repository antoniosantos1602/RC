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

int llopenReceiv(int fd);

int llopenTransmitt(int fd);

int llopen(int port, int type);
