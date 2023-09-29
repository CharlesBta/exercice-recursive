#include <stdio.h>

void convertirBase2Recusive(int nombre){
    if (nombre == 0) {
        return;
    }
    convertirBase2Recusive(nombre / 2);
    printf("%d", nombre % 2);
}

int main() {
    for (int i = 1; i < 11; ++i) {
        printf("%d:",i);
        convertirBase2Recusive(i);
        printf("\n");
    }
    return 0;
}

