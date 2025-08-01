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

    if (wavelength >= 380 && wavelength < 450)
        printf("Color: violet\n");
    else if (wavelength >= 450 && wavelength < 485)
        printf("Color: blue\n");
    else if (wavelength >= 485 && wavelength < 500)
        printf("Color: cyan\n");
    else if (wavelength >= 500 && wavelength < 565)
        printf("Color: green\n");
    else if (wavelength >= 565 && wavelength < 590)
        printf("Color: yellow\n");
    else if (wavelength >= 590 && wavelength < 625)
        printf("Color: orange\n");
    else if (wavelength >= 625 && wavelength <= 750)
        printf("Color: red\n");
    else
        printf("Color: not in visible range\n");

    return 0;
}

