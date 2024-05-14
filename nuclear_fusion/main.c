#include <stdio.h>
#include <math.h>

#define SPEED_OF_LIGHT 299792458
#define MASS_OF_DEUTERIUM_KG 3.34358348e-27
#define MASS_OF_TRITIUM_KG 5.007356665e-27
#define MASS_OF_HELIUM_KG 6.6464764e-27
#define ATOMIC_MASS_UNIT 1.6605402e-27
#define ELECTRON_MASS -1.602e-19

double e_calc(double mass_deuterium, double mass_tritium, double mass_helium)
{
    double mass_initial = mass_deuterium + mass_tritium;
    double mass_final = mass_helium;
    double mass_difference = mass_initial - mass_final;
    double energy_release = mass_difference * SPEED_OF_LIGHT * SPEED_OF_LIGHT;
    return energy_release;
}

float conv_ev(double num)
{
    return num / ELECTRON_MASS;
}

int main()
{
    double energy_release;
    energy_release = e_calc(MASS_OF_DEUTERIUM_KG / 1.6605402e-27, MASS_OF_TRITIUM_KG / 1.6605402e-27, MASS_OF_HELIUM_KG / 1.6605402e-27);
    printf("E is equal to: %e Joules\n", energy_release);
    float in_ev = conv_ev(energy_release);
    printf("Released Energy in electronvolts (ev): %e", in_ev);
    return 0;
}
