#include <stdio.h>
#include <math.h>

int main() {
    //operasi input 
    int a, b, c; 
    scanf("%d %d", &a, &b);
    double a_pangkat = pow(a, 2);
    double b_pangkat = pow(b, 2);

    //operasi mencari c
    double alas = b_pangkat-a_pangkat;
    c = sqrt(alas);      

    int keliling;
    int luas;

    keliling = a + b + c;
    luas = 1/(float)2 * c * a;

    printf("\n\nAlas : %d cm \n", c); 
    printf("Tinggi : %d cm \n", a );
    printf("Keliling : %d  cm \n", keliling);
    printf("Luas : %d  cm^2 \n", luas);


    return 0;
}
