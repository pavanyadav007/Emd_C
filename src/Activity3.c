#include <avr/io.h>
#include"Activity3.h"
#include<util/delay.h>

void setupADC()
{
   TCCR0A|=(1<<COM0A1)|(1<<WGM00)|(1<<WGM00);
    TCCR0B|=(1<<CS01)|(1<<CS00);
    DDRD|=(1<<PD6);

}
char pwmout(uint16_t temp)
{
    char temperature;

    if((temp>=0) && (temp<=209)){

        OCR0A = 205; //20% duty cycle
        temperature= 20;
        _delay_ms(20);
    }
    else if((temp>=210) && (temp<=509)){

        OCR0A = 410; //40% duty cycle
        temperature = 25;
        _delay_ms(20);
    }
    else if((temp>=510) && (temp<=709)){

        OCR0A = 717;//70% duty cycle
        temperature = 29;
        _delay_ms(20);
    }
    else if((temp>=710) && (temp<=1024)){

        OCR0A = 973; //95% duty cycle
        temperature = 33;
        _delay_ms(20);
    }
    else{
        OCR0A = 0; //0% output
        temperature = 0;
    }
    return temperature;
}
