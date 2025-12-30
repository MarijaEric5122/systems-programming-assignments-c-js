#include <stdint.h>

void change_brightness(uint8_t *data, int length, int param) {
    for (int i = 0; i < length; i += 4) {
        int r = data[i];
        int g = data[i + 1];
        int b = data[i + 2];

        // dodaj parametar na svaki kanal
        int nr = r + param;
        int ng = g + param;
        int nb = b + param;

        // ograniči na [0,255]
        if (nr < 0) nr = 0; else if (nr > 255) nr = 255;
        if (ng < 0) ng = 0; else if (ng > 255) ng = 255;
        if (nb < 0) nb = 0; else if (nb > 255) nb = 255;

        data[i]     = (uint8_t)nr;
        data[i + 1] = (uint8_t)ng;
        data[i + 2] = (uint8_t)nb;
        // alpha (data[i+3]) ostaje nepromenjen
    }
}


/*

emcc brightness.c -O3 -o brightness.html --shell-file template.html -s EXPORTED_FUNCTIONS=['_change_brightness','_malloc','_free'] -s EXPORTED_RUNTIME_METHODS=['ccall','cwrap','HEAPU8']

*/