#ifndef STATE_MACHINE_H 
#define STATE_MACHINE_H

typedef enum{
    START,
    FLAG_RCV,
    A_RCV,
    C_RCV,
    BCC_OK,
    STOP
}STATE;

typedef enum{
    SET,
    UA
}SET_UA;

STATE machine(STATE s, SET_UA type, unsigned char input);
 
#endif

