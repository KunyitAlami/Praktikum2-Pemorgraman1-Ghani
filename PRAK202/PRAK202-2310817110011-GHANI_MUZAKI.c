#include <stdio.h>

int main() {
    double nilai_pertama;
    printf("Masukkan Nilai Pertama: ");
    scanf("%lf", &nilai_pertama);

    double nilai_kedua;
    printf("Masukkan Nilai Kedua: ");
    scanf("%lf", &nilai_kedua);

    double hasil = nilai_pertama + nilai_kedua;

    printf("Hasil penjumlahan dari nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%g\"\n", nilai_pertama, nilai_kedua, hasil);

    return 0;
}
