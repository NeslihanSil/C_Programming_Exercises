//rekürsif fonksiyonu kullanarak faktöriyel iþlemini hesaplýyorum:
#include<stdio.h>
#include<math.h>
int faktoriyel(int a){
    if(a>1) {
        return a*faktoriyel(a-1);
    }
    else{
        return 1;
    }
}
int main()
{
    int sonuc;
    sonuc=faktoriyel(3);
    printf("%d",sonuc);
    return 0;
}
