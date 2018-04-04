/*
 * ADC.h
 *
 * Created: 28-Jan-18 9:51:22 PM
 *  Author: Alsayed
 */ 

/*----------------------------------------------------------------
--------------------- Header Guard -------------------------------
----------------------------------------------------------------*/
#ifndef ADC_H_
#define ADC_H_

/*----------------------------------------------------------------
--------------------- File Inclusions ----------------------------
----------------------------------------------------------------*/

#include <stdint.h>
/*----------------------------------------------------------------
--------------------- Public Data Types --------------------------
----------------------------------------------------------------*/

typedef enum{
	ADC_CHANNEL_0=0,					
	ADC_CHANNEL_1,
	ADC_CHANNEL_2,
	ADC_CHANNEL_3,
	ADC_CHANNEL_4,
	ADC_CHANNEL_5,
	ADC_CHANNEL_6,
	ADC_CHANNEL_7
}adc_channel_t;

/*----------------------------------------------------------------
--------------------- Public Function Prototypes -----------------
----------------------------------------------------------------*/
extern void adc_init(void);
extern uint16_t adc_read_channel(adc_channel_t adc_channel);


#endif /* ADC_H_ */
/*----------------------------------------------------------------
--------------------- End of File --------------------------------
----------------------------------------------------------------*/