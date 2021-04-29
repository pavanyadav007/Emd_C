
#ifndef ACTIVITY3_H_INCLUDED
#define ACTIVITY3_H_INCLUDED
/** \brief to setup the ADC for PWM output
 *
 */
void setupADC();
/** \brief to modify the 1024 in terms of temperature values
 *
 * \param temp
 * \return char
 *
 */

char pwmout(uint16_t temp);

#endif // ACTIVITY3_H_INCLUDED
