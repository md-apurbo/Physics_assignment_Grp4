#include <stdio.h>
#include <math.h>

int main() {
    double lambda1 = 530; 
    double theta1_deg = 65.0; 
    int m1 = 3;

    double lambda2 = 700;
    int m2 = 2;

    double theta1_rad = theta1_deg * M_PI / 180.0;
    double d = (m1 * lambda1) / sin(theta1_rad);

    double sin_theta2 = (m2 * lambda2) / d;

if (sin_theta2 > 1) {
        printf("No second-order bright spot for red light.\n");
    } else {
        double theta2_rad = asin(sin_theta2);
        double theta2_deg = theta2_rad * 180.0 / M_PI;
        printf("Second-order angle for red light: %.2f degrees\n", theta2_deg);
    }

    return 0;
}
