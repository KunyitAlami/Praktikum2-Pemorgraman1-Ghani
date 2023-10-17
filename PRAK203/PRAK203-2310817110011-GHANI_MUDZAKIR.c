#include <stdio.h>
#include <stdbool.h>

int main() {
    int a,b,c,d,e,f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    float total = (a-b)*(c/(float)d)-(e+f);
    printf("%.3f", total);


    return 0;
}

