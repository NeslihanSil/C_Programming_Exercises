//Dört temel aritmetik iþlemi (+,-,*,/)fonksiyonlarla gerçekleþtiren
//basit bir hesap makinesi:
#include<stdio.h>
#include<stdlib.h>
int toplama(int,int);
int cikarma(int,int);
int carpma(int,int);
float bolme(int,int);

void main()
{
    int secim;
    int sayi1,sayi2;
    
    while(1)
    {
    printf("1-toplama islemi\n2-cikarma islemi\n3-carpma islemi\n4-bolme islemi\n5-programdan cikis yapmak icin\nbirini seciniz\n");
    scanf("%d",&secim);
    
    if(secim==5){
        printf("güvenli cikis yaptiniz");
        exit(0);}
            
    printf("2 tane tam sayi giriniz:\n");
    scanf("%d %d",&sayi1,&sayi2);
    
    
        if(secim==1){
            printf("Sonuc=%d\n",toplama(sayi1,sayi2));
        }
        else if(secim==2){
            printf("sonuc=%d\n",cikarma(sayi1,sayi2));
        }
        else if(secim==3){
            printf("sonuc=%d\n",carpma(sayi1,sayi2));
        }
        else if(secim==4){
            printf("sonuc=%.2f\n",bolme(sayi1,sayi2));
        }
        else{
            printf("Hatali giris yaptiniz!\n");
        }
    }
}


int toplama(int a,int b)
{
    return a+b;
}
int cikarma(int a, int b)
{
    return a-b;
}
int carpma(int a,int b){
    return a*b;
}
float bolme(int a,int b)
{
    return a/b;
}
