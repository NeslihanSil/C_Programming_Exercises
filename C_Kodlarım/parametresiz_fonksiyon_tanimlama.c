//parametresiz fonksiyon örneði:
//Böyle bir fonksiyonun içine deðer aktaramadýðýmýz için, fonksiyon sabit deðerler üretecektir.Bu durumu kullanýcýdan girdi alarak deðiþtirebiliriz.
    
#include <stdio.h>
int toplama(){
    return 3+6;
}
int main(){
    printf("%d", toplama());
    return 0;
}
