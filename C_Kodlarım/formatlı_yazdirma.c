#include<stdio.h>

int main(void) {
    int yas = 10, a = 20;
    float pi = 3.141592;
    char harf = 'A';

    // Ýki deðiþkeni ayný anda yazdýrmak için her biri için ayrý format belirtmeliyiz
    printf("bla %d bla %d bla\n", yas, a);
    
    printf("yas degeri=%d\n a degeri=%d\n",yas,a);

    // Diðer deðiþkenleri de doðru formatlarla yazýyorum
    printf("pi sayisi: %.6f\n", pi);   // float için %f
    printf("harf: %c\n", harf);       // char için %c

    return 0;
}

