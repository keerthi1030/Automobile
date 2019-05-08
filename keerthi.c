/*
 */

#include <avr/io.h>
#define SET_BIT(PORT,bit) PORT|= (1<<bit)
#define CLR_BIT(PORT,bit) PORT&= ~(1<<bit)
/*int main(void)
{
   //                                                                                                                                                                                                             DDRD = 0xff;
    SET_BIT(DDRD,PD7); //Output pin
    CLR_BIT(DDRD,PD3); //input that is switch
    SET_BIT(PORTD,PD3); // as a pull up resistor that is we make it as high
    while(1)
    {
         uint8_t pin_reset = 0x00;
        pin_reset = PIND;
        if(!(pin_reset & (1<<PD3))) // !1 = 0 since its pull up if we get 0 it will work
        {
            SET_BIT(PORTD,PD7);
        }
        else
        {
            CLR_BIT(PORTD,PD7);
        }
    }

    return 0;
}
*/


int main(void)
{
   //                                                                                                                                                                                                             DDRD = 0xff;
    SET_BIT(DDRD,PD7); //Output pin
    CLR_BIT(DDRD,PD3); //input that is switch
    SET_BIT(PORTD,PD3); // as a pull up resistor that is we make it as high
    while(1)
    {
         uint8_t pin_reset = 0x00;
        pin_reset = PIND;
        if(!(pin_reset & (1<<PD3))) // !1 = 0 since its pull up if we get 0 it will work
        {
            SET_BIT(PORTD,PD7);
        }
        else
        {
            CLR_BIT(PORTD,PD7);
        }
    }

    return 0;
}
