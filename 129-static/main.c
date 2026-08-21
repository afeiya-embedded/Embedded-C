#include <stdio.h>
#include "led.h"
#include "beep.h"


int main(int argc, char const *argv[])
{
    led_on(); 
    led_off(); 
    beep_on();
    beep_off();
    return 0;
}
