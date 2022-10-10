#define PORTS0 "dev/ttyS0"
#define PORTS1 "dev/ttyS1"

int llopenReceiv(int port){

}

int llopenTransmit(){
    
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
