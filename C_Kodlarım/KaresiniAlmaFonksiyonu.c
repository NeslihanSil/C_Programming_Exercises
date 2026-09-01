//kare alma fonksiyonuyla for döngüsünü birleþtiriyorum
#include<stdio.h>
float kareAl(float);

void main()
{
    int sayac;
    for(sayac=1;sayac<=10;sayac++)
    {
        printf("sayi:%d sayinin karesi:%.2f\n",sayac,kareAl(sayac));
    }
    printf("%.2f",kareAl(4.5));
}
float kareAl(float a )
{
    return a*a;
}
