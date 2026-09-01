//Kullanýcýdan iki dizinin eleman sayýsýný ve elemanlarýn deðerlerini alan ve bu deðerlerin toplamýný üçüncü bir dizi olarak yazdýran program:
#include <stdio.h>
int main(void)
{
    int i,N,A[100],B[100],C[100];
    printf("Dizinin eleman sayýsýný gir:\n");
    scanf("%d",&N);
    
    for(i=0;i<N;i++){
        printf("A[%d] degerini gir=",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<N;i++){
        printf("B[%d] degerini gir=",i);
        scanf("%d",&B[i]);
    }
    for(i=0;i<N;i++){
        C[i]=A[i]+B[i];
        printf("C[%d]=%d\n",i,C[i]);
    }
return 0;
}
