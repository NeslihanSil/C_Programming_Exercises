//bir sayýnýn üssünü alan bir fonksiyon oluþturup bu fonksiyonu kullanýcýdan giriþ alarak kullanýyorum:
#include<stdio.h>
double UsAl(double,double);

int main(void)
{
    double a,b;
    printf("taban ve us degerini giriniz:\n");
    scanf("%lf %lf",&a,&b);
    printf("us alma sonucu=%.2lf",UsAl(a,b));
   
}

double UsAl(double a,double b)
{
    int x;
    double sonuc=1.0;
    for(x=1;x<=b;x++){
        sonuc*=a;
    }
    return sonuc;
}
