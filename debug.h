//--------------------------------------------------
// Отладка
//--------------------------------------------------
#ifndef DEBUG_H
#define DEBUG_H

//--------------------------------------------------
#define DBG_INIT DDRB  |= (1<<DDB7)

//--------------------------------------------------
#define DBG1_SET PORTB |= (1<<PB7)
#define DBG1_TGL PORTB ^= (1<<PB7)
#define DBG1_CLR PORTB &=~(1<<PB7)

#endif
//--------------------------------------------------
