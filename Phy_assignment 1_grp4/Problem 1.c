#include <stdio.h>
#include <math.h>

int main() {
    int m;
    double theta, d, wavelength;
    printf("Enter order m: ");
    scanf("%d", &m);
    printf("Enter angle theta in degrees: ");
    scanf("%lf", &theta);
    printf("Enter slit distance d in micrometers: ");
    scanf("%lf", &d);

    double theta_rad = theta * M_PI / 180.0;
    d = d * 1e-6;
    wavelength = (d * sin(theta_rad)) / m;
    wavelength = wavelength * 1e9;

    printf("Wavelength: %.2f nm\n", wavelength);

    

