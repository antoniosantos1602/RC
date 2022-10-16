#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <termios.h>
#include <unistd.h>

#include "data_link_layer.h"


int llopenReceiv(int fd){
    char neededB[1];
    neededB[0] = SET;
    
    //code case it fails ---- return -1

    printf("Frame received!\n");

    // code case it fails ------- return -1

}

int llopenTransmitt(int fd){

}

int llopen(int port, int type){
    char *port_name;

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

    return fd;
}

int llwrite(int fd, char * buffer, int length){
    
}

int llread(int fd, char * buffer){

}

int llclose(int fd){

}
