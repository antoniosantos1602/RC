#include "state_machine.h"
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include "macros.h"

STATE machine(STATE s, SET_UA type, unsigned char input){
    STATE state;     
    
    switch(s){
        case START:
            if(input == FLAG){
                state = FLAG_RCV;
            }
            break;
        case FLAG_RCV:
            if(input == FLAG){
                state = FLAG_RCV;
            }
            else if(input == ESC){  
                state = START; 
            }
            else if(input == A){
                state = A_RCV;
            }
            break;
        case A_RCV:
            if(type == SET){
                if(input == C_SET)
                    state = C_RCV;
            }
            else if(type == UA){
                if(input == C_UA)
                    state = C_RCV;
            }
            if(input == FLAG){
                state = FLAG_RCV;
            }
            else if(input == ESC){  
                state = START; 
            }
            break;
        case C_RCV:
            if(type == SET){
                if(input == A^C_SET)
                    state = BCC_OK;
            }
            else if(type == UA){
                if(input == A^C_UA) 
                    state = BCC_OK;
            }
            if(input == FLAG){
                state = FLAG_RCV;
            }
            else if(input == ESC){  
                state = START; 
            }
            break;
        case BCC_OK:
        case STOP:
    }
    
    return state; 
}

