#ifndef GLOBAL_DEFINES_HPP
#define GLOBAL_DEFINES_HPP

typedef unsigned long ulong;

// Define this if you want no logging to host enabled at all. Saves valuable space in flash.
//#define NO_LOGGING

// Enable this for verbose logging of IEC and CBM interfaces.
//#define CONSOLE_DEBUG
// Enable this to debug the IEC lines (checking soldering and physical connections). See project README.TXT
//#define DEBUGLINES

// This should be defined if the RESET line is soldered in the IEC DIN connector. When defined it will give the
// arduino to go into a reset state and wait for the CBM to become ready for communiction.
#define HAS_RESET_LINE

// Define this if you want to include the support for the MAX7219 display library in this project.
// What it does is showing loading progress on the display and some nice scrolling of the filename and other
// stuff on the display. The display hardware can be bought cheap here at dx.com:
// http://dx.com/p/max7219-dot-matrix-module-w-5-dupont-lines-184854
//#define USE_LED_DISPLAY

// Define this if you want to configure a HC-06 bluetooth module connected to the arduino and make the communication
// with the commodore machine completely wireless. Defining this will configure the BT module in the main sketch.
//#define CONFIG_HC06_BLUETOOTH

// Define this for speed increase when reading (filling serial buffer while transferring
// to CBM without interrupts off). It is experimental, stability needs to be checked
// further even though it seems to work just fine.
//#define EXPERIMENTAL_SPEED_FIX

// For serial communication. 115200 Works fine, but probably use 57600 for bluetooth dongle for stability.
#define DEFAULT_BAUD_RATE 115200
#define SERIAL_TIMEOUT_MSECS 1000

#endif // GLOBAL_DEFINES_HPP
