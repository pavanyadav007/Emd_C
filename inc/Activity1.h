#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED
/** \brief to set all the pins to output and input
 *
 * \return null
 *
 */

void inisialise_ports();//TO INITIALISE PORTS

/** \brief to check if the user is seated and the heater is ON
 */
#define CHECKSEAT ((!(PIND&(1<<PD2)))&&(!(PINC&(1<<PC2)))) //TO CHECK IF THE DRIVER IS SEATED AND THE HEATER IS ON
#endif
