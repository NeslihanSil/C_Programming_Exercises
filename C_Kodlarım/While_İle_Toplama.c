//1 den N'e kadar olan sayýlarý while döngüsü ile toplama 
#include<stdio.h>
void main()
{
    int i;
    int N;
    int toplam=0;
    
    printf("Bir sayi girin:\n");
    scanf("%d",&N);
    
    i=1;
    while (i<=N){
        toplam+=i;
        i++;
    }
    printf("toplama sonucu=%d",toplam);
    
}
