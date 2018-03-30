#include "mcc_generated_files/mcc.h"
#include "serial_print.h"

// Prints a string (denoted by the double quotes "") on a single line
void print(const char * string)
{
    while(*string)
    {
        EUSART_Write(*string++);
    }
}

// Prints a string (denoted by the double quotes "") followed by a new line ('\r')
void println(const char * string)
{
    while(*string)
    {
        EUSART_Write(*string++);
    }
    EUSART_Write('\r');
}