#include <avr/io.h>
#include "Activity1.h"

void inisialise_ports()//TO INITIALISE PORTS
{
    DDRB|=(1<<PB0);//TO MAKE TH PIN AN OUTPUT PIN
    DDRD&=~(1<<PD2);//TO MAKE  IT AS AN INPUT PIN
    PORTD|=(1<<PD2);//PULL UP
    DDRD&=~(1<<PD3);//TO MAKE  IT AS AN INPUT PIN
    PORTD|=(1<<PD3);//PULL UP
}
