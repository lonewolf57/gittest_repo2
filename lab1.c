/*Lab 1 first file - ID number 815006656*/
#include <p18f452.h>

/*Set configuration bits for use with ICD2*/
#pragma config OSC = HS
#pragma config WDT = OFF
#pragma config LVP = OFF

void main(void)
{
    /*insert code from pre-lab Q14 to change values on PORTB*/
    
    /*Clear TRISB and PORTB values*/
    int i;
    TRISB = 0x00;
    PORTB = 0x00;
    
    for(i = 1; i <16; i++)
    {
        PORTB = i;
    }
    /*dfgneljdkn*/
    //akdjhnals;f
}