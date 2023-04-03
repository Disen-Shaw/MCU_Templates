
#include "gd32f10x.h"
#include "systick.h"
#include <stdio.h>
#include "main.h"


int main(void)
{
    /* configure systick */
    systick_config();
	
    while(1){
    }
}

/* 
retarget the C library printf function to the USART
int fputc(int ch, FILE *f)
{
    usart_data_transmit(EVAL_COM0, (uint8_t)ch);
    while(RESET == usart_flag_get(EVAL_COM0, USART_FLAG_TBE));

    return ch;
}
*/
