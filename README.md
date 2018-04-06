#   PIC Serial Print 
A library used for printing strings and stuff to a serial console for pic based microcontrollers. Idk though, you might be able to implement this on other c based micros ¯\\\_(ツ)\_/¯. Still a WIP, will add ability to print other data types in the future

## MPLAB Setup
Follow this guide to setup the EUSART module on your PIC: http://microchipdeveloper.com/projects:mcu1101-project-12

After that's done just copy `serial_print.h` to the `Header Files` folder and `serial_print.c` to the `Source Files` folder in your main project directory

Put `#include "serial_print.h"` at the top of your `main.c` file and you're done

Connect your PIC to your PC via serial connection (i.e. [FTDI Serial TTL-232 Cable](https://www.amazon.com/Adafruit-Serial-TTL-232-Cable-ADA70/dp/B00SK8LK1W/ref=sr_1_3?s=industrial&ie=UTF8&qid=1522443964&sr=1-3&keywords=ftdi+serial+ttl-232+usb+cable)) and then you can view your output in a serial terminal (i.e. [CoolTerm](https://http://freeware.the-meiers.org/))

## Usage
**`print(const char *)`** - Prints a string (denoted by the double quotes "") on a single line

**Example:** 
```
print("Yo Waddup ");
print("Earth");
```

**Output:**
```
Yo Waddup Earth
```


**`println(const char *)`** - Prints a string (denoted by the double quotes "") followed by a new line ('\r')

**Example:** 
```
println("Ayyy"); 
println("lmao");
```

**Output:**
```
Ayy
lmao
```

**`print_int(int)`** - Prints an integer, converted to a string, on one line

**Example:** 
```
print_int(3 + 4); 
print(" = ");
print("3 + 4");
```

**Output:**
```
12 = 3 + 4
```

**`println_int(int)`** - Prints an integer, converted to a string, followed by a new line ('\r')

**Example:** 
```
println_int(123);
print("abc");
```

**Output:**
```
123
abc
```