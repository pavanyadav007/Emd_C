#include <avr/io.h>
#include <util/delay.h>
#include <stdint.h>
#include "Activity1.h"
#include "Activity2.h"
#include "Activity3.h"
#include"Activity4.h"



int main(void)
{
    inisialise_ports();//Initialize ports for led blinking
    InitADC();//Initialize ADC ports
    uint16_t temp=0; //declare temp value to 0
    uint16_t tempdata=0;//actual temperature value
    setupADC();//start PWM generation
    initUSART(103);//Initialize ports for USART

    while(1)
          {
              if(CHECKSEAT)//person is seated and temperature control ON
              {
                    PORTB|=(1<<PB0);//blinking of the led
                    _delay_ms(20);

                    temp= ReadADC(0);//reading the adjusted temp value
                    _delay_ms(200);

                    tempdata=pwmout(temp);//PWM generation
                    UARTsend(tempdata);//send data to USART
                    _delay_ms(20);


              }
               else
                {
                    PORTB&=~(1<<PB0);//LED OFF
                    _delay_ms(200);
                     OCR1A = 0; //PWM wave 0
                }
          }


    return 0;
}
