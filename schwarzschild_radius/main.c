#include <math.h>
#include <stdio.h>
#include <string.h>

#define GRAVITATIONAL_CONSTANT 6.67430e-11

void r_s(float m)
{
    // Calculates schwarzschild radius ($R_{s}$)
    // m is the mass
    float nom = 2 * (GRAVITATIONAL_CONSTANT * m);
    float denom = pow(299792458, 2); // Raise c to power of 2
    float res = nom / denom;

    if (res)
    {
        printf("Schwarzschild Radius: %.2fm", res);
    }
    else
    {
        printf("Error: Invalid mass\n");
    }
}

int main(int argc, char *argv[])
{
    char *star = argv[1];

    if (argc < 2)
    {
        printf("Usage: %s <star>\n", argv[0]);
        return 1;
    }

    if (strcmp(star, "sun") == 0)
    {
        r_s(1.989e30);
    }
    else if (strcmp(star, "rigel") == 0)
    {
        r_s(3.58e31);
    }
    else if (strcmp(star, "uy_scuti") == 0)
    {
        r_s(1.69e31);
    }
    else
    {
        printf("Unknown star: %s\n", star);
        return 1;
    }

    return 0;
}
