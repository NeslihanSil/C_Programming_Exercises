
#include <stdio.h>

int main() {
    int a;
    float b;
    double c;
    char d;

    printf("int gir: ");
    scanf("%d", &a);

    printf("float gir: ");
    scanf("%f", &b);

    printf("double gir: ");
    scanf("%lf", &c);

    printf("char gir: ");
    scanf(" %c", &d);  // baþtaki boþluk önemli!

    printf("\nSonuclar:\n");
    printf("int: %d\n", a);
    printf("float: %f\n", b);
    printf("double: %lf\n", c);
    printf("char: %c\n", d);

    return 0;
}

