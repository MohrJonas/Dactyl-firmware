#include <Mechy.h>
#include <Mechy/Transmitter.h>

#define DATA _D1
#define CLK _D0

#define ROWS 6
#define COLS 6
const uint8_t pinRows[] = { _B1, _B3, _B2, _B6, _B5, _F7 };
const uint8_t pinCols[] = { _B4, _E6, _D7, _C6, _D4, _F6 };

Transmitter transmitter = Transmitter(DATA, CLK, pinRows, pinCols, ROWS, COLS);

void setup() {
    transmitter.begin();
}

void loop() {
    transmitter.scan();
}