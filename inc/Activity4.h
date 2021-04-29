#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED
/** \brief to initialize USART
 *
 * \param ubrreg_value
 *
 */

void initUSART(uint16_t ubrreg_value);
/** \brief to send the USART the modified temperature value
 *
 * \param temp_value
 */

void UARTsend(char temp_value);

#endif // ACTIVITY4_H_INCLUDED
