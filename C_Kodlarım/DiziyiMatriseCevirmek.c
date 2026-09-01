#include <stdio.h>
#include <stdlib.h>

int main() {
    int dizi[100];
    int a[100][100];
    int i, j, n, x, sat, sut;

    printf("Diziniz kac elemandan olusacak? > ");
    scanf("%d", &n);

    for (x = 0; x < n; x++) {
        printf("Dizinin [%d]. elemanini gir > ", x + 1);
        scanf("%d", &dizi[x]);
    }

    printf("\nMatrisin satir sayisini gir > ");
    scanf("%d", &sat);

    printf("Matrisin sutun sayisini gir > ");
    scanf("%d", &sut);

    // Kontrol: Eleman sayisi satir*sutun ile uyumlu mu?
    if (n == sat * sut) {
        x = 0;
        for (i = 0; i < sat; i++) {
            for (j = 0; j < sut; j++) {
                a[i][j] = dizi[x];
                x++;
            }
        }

        printf("\n\nMATRIS > \n");
        for (i = 0; i < sat; i++) {
            for (j = 0; j < sut; j++) {
                printf("%3d", a[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("HATA! Dizi eleman sayisi satir*sutun carpimina esit olmalidir.\n");
    }

    return 0;
}
