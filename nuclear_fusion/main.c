#include <math.h>

#define SPEED_OF_LIGHT 299792458

int main(int argc, char *argv[])
{
    /*

    */
    const float m_tritium = 5.0078e-27;
    const float m_deuterium = 3.34e-27;

    float m_helium_4 = m_deuterium * m_tritium;

    float E = (m_helium_4) * (pow(SPEED_OF_LIGHT, 2));

    printf("Fusion of Deuterium and Tritium will release %f eV of Energy");
}
