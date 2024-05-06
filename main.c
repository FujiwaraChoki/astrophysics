#include <math.h>
#include <stdio.h>

#define GRAVITATIONAL_CONSTANT 6.67430e-11

void r_s(float m) {
    // Calculates schwarzschild radius ($R_{s}$)
    // m is the mass
    float nom = 2 * (GRAVITATIONAL_CONSTANT*m);
    float denom = pow(299792458, 2); // Raise c to power of 2
    float res = nom / denom;

    if(res) {
        printf("now try actually becoming this dense: %.2fm", res);
    } else {
        printf("Wait.. what?");
    }
}

int main(int argc, char* argv[]) {
    
    // trying for rigel (3.58 x 10^31kg)
    r_s(3.58e31f);

    return 0;
}
