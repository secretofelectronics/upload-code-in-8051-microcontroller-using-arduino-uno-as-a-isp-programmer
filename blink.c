#include <reg51.h>

sbit LED = P1^0; // Define LED pin

void delay(unsigned int count) {
    unsigned int i, j;
    for (i = 0; i < count; i++) {
        for (j = 0; j < 1275; j++) {
            // Do nothing
        }
    }
}

void main(void) {
    while (1) {
        LED = 1;  // Turn on LED
        delay(500); // Delay
        LED = 0;  // Turn off LED
        delay(500); // Delay
    }
}
