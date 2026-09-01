//Bir dizinin elemanlarýný kullanýcýdan girdi olarak alýp bu dizinin ortalamasýný ve standart sapmasýný hesaplayan porgramýn kodu:
#include <stdio.h>
#include <math.h>
#define N 10
int main(){
 int i;
 float x[N], toplam = 0.0, ort, std_sap = 0.0;
 /* ortalama hesabý */
 for(i=0; i<N; i++){
 printf("%d. sayiyi giriniz :\n ",i+1);
 scanf("%f",&x[i]);
 toplam += x[i];
 }
 ort = toplam/N;
 /* standart sapma hesabý */
 for(toplam = 0.0, i=0; i<N; i++)
 toplam += pow(x[i]-ort, 2.0);
 std_sap = sqrt( toplam/(N-1) );
 printf("Ortalama = %.2f\n",ort);
 printf("Standart sapma = %.2f\n",std_sap);
 return 0;
}
