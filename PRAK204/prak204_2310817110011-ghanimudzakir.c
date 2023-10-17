#include <stdio.h>
#include <math.h>

int main() {
    double jari_jari, tinggi, volume, luas, keliling;
    float phi = 22/(float)7;

    scanf("%lf %lf", &jari_jari, &tinggi);

    volume = phi * jari_jari * jari_jari * tinggi;
    luas = 2 * phi * jari_jari * (jari_jari + tinggi);
    keliling = 2 * phi * jari_jari;

    printf("\nVolume : %0.2f\n", volume);
    printf("Luas : %0.2f\n", luas);
    printf("Keliling : %0.2f\n", keliling);

    return 0;
}
