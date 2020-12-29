#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/adc.h"

void main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    ADC_Initialize();    
    while (1)
    {
        ADC_StartConversion();
        while(ADCON0bits.GO_nDONE==1){
        }
        PORTB=ADRESH;
    }
}