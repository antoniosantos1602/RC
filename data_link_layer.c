#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <termios.h>
#include <unistd.h>

#include "data_link_layer.h"

// TODO
// char sender; //trasmitter or receiver

int llopen(int port, char *a){
    /*if(strcmp(a, "RECEIVER"))
        sender = RECEIVER;
    else if(strcmp(a, "TRANSMITTER"))
        sender = TRANSMITTER;
    else {
        printf("Invalid sender!\n");
        return -1;
    }*/

    //choose port 
    if(port == 0){
        port_name = PORTS0;
    }
    else if(port == 1){
        port_name = PORTS1;
    }
    else{
        printf("Wrong port number!\n"); 
        return -1;
    }

    // open port
    int fd = open(port_name);

    if(fd < 0){
        printf("Couldn't open port!\n'");
        return -1;
    }

    // process state machine here -> cycle(?)

    return fd;
}

int llwrite(int fd, char * buffer, int length){
    
}

int llread(int fd, char * buffer){

}

int llclose(int fd){

}
