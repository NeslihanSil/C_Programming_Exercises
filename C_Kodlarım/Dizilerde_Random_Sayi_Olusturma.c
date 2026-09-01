#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int c, n;

srand(time(NULL));

printf("[1,100] aralýðýnda rastgele on sayý:\n");

for (c = 1; c <= 10; c++) {
    n = rand() % 100 + 1;
    printf("%d\n", n);
}
return 0;
}
