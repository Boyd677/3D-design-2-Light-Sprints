//easy NeoPixel Library for colour sequence
// I changed all of the colours and the delay.
// I made it cool



#include <EasyNeoPixels.h>

void setup() {
    setupEasyNeoPixels(6, 1 );
}

void loop() {
    // make it red
    writeEasyNeoPixel(0, 255, 0, 0);
    delay(100);
    
writeEasyNeoPixel(0, 225, 30, 0);
    delay(100);

    writeEasyNeoPixel(0, 200, 70, 0);
    delay(100);

    writeEasyNeoPixel(0, 150, 150, 0);
    delay(100);

    writeEasyNeoPixel(0, 100, 200, 0);
    delay(100);

    writeEasyNeoPixel(0, 25, 225, 0);
    delay(100);

    writeEasyNeoPixel(0, 0, 255, 0);
    delay(100);

    writeEasyNeoPixel(0, 0, 225, 30);
    delay(100);

    writeEasyNeoPixel(0, 0, 200, 70);
    delay(100);

    writeEasyNeoPixel(0, 0, 150, 150);
    delay(100);

    writeEasyNeoPixel(0, 0, 100, 200);
    delay(100);

    writeEasyNeoPixel(0, 0, 25, 225);
    delay(100);

    writeEasyNeoPixel(0, 0, 0, 255);
    delay(100);

    writeEasyNeoPixel(0, 30, 0, 225);
    delay(100);

    writeEasyNeoPixel(0, 70, 0, 200);
    delay(100);

    writeEasyNeoPixel(0, 150, 0, 150);
    delay(100);

    writeEasyNeoPixel(0, 200, 0, 100);
    delay(100);

    writeEasyNeoPixel(0, 225, 0, 25);
    delay(100);
}
