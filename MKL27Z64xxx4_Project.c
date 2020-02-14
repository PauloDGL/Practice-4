#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKL27Z644.h"
#include "fsl_debug_console.h"
#include "GPIO.h"

int main(void) {
long *dwgpClockenabled;

    dwgpClockenabled = (long *) SIM5;
    *dwgpClockenabled = CLOCK_ON; /*Se da la habilitacion de todos los relojes*/
    fnPinMODE (B, 18, OUTPUT);
    fnPinMODE (A, 13, OUTPUT);
    fnPinMODE (B, 19, OUTPUT);
    fnDigitalwrite (B, 19, ON);
    fnDigitalwrite (A, 13, ON);
    fnDigitalwrite (B, 18, ON);
    fnDigitalwrite (B, 19, OFF);
    fnDigitalwrite (A, 13, OFF);
    fnDigitalwrite (B, 18, OFF);






    return 0 ;
}


