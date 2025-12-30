#include <stdio.h>

double pi_leibniz(int n) {
    printf("Pozvana funkcija sa n=%d\n", n);
    if (n <= 0) return 0.0;
    double s = 0.0, sign = 1.0;
    for (int k = 0; k < n; ++k) {
        s += sign / (2.0*k + 1.0);
        sign = -sign;
    }
    return 4.0 * s;
}



/*

emcc pi.c -O3 -o pi.html --shell-file template.html -s NO_EXIT_RUNTIME=1 -s EXPORTED_FUNCTIONS=[_pi_leibniz] -s EXPORTED_RUNTIME_METHODS=ccall

*/