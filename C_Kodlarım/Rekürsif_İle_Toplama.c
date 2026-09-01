//Özyinelemeli(rekürsif) fonksiyon kullanarak 1'den n'e kadar olan doðal 
//sayýlarýn toplamýný yazdýrma:

#include<stdio.h>
int toplama(int n);

int main(){
    int sayi,sonuc;
    
    printf("Bir pozitif tam sayi giriniz:\n");
    scanf("%d",&sayi);
    
    sonuc=toplama(sayi);
    
    printf("toplama sonucu=%d",sonuc);
    return 0;
}
int toplama(int n){
    if(n!=0)
        return n+toplama(n-1);
    else
        return n;
}
