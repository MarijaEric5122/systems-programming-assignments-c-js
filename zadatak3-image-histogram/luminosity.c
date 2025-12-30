#include <stdint.h>


void grayscale_and_hist(uint8_t *data, int length, uint32_t *hist) {
 
    for (int i = 0; i < 256; i++) {
        hist[i] = 0;
    }

    for (int i = 0; i < length; i += 4) {
        uint8_t r = data[i];
        uint8_t g = data[i + 1];
        uint8_t b = data[i + 2];

        uint8_t L = (uint8_t)(0.299 * r + 0.587 * g + 0.114 * b);

      
        data[i]     = L;
        data[i + 1] = L;
        data[i + 2] = L;
       

        hist[L]++;
    }
}


/*

emcc luminosity.c -O3 -o luminosity.html --shell-file template.html -s EXPORTED_FUNCTIONS=['_grayscale_and_hist','_malloc','_free'] -s EXPORTED_RUNTIME_METHODS=['ccall','HEAPU8','HEAP32']

*/