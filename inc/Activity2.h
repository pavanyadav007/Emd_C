#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED
/** \brief to initialize ADC operation by setting bits
 *
 */

void InitADC();

/** \brief to read the output of the ADC
 *
 * \param ch
 * \return uinit16_t
 *
 */

uint16_t ReadADC(uint8_t ch);
#endif
