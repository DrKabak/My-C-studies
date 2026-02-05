#include <stdio.h>
#include <string.h>

int main() {
    char metin[100];

    printf("Metin girin: ");
    fgets(metin, sizeof(metin), stdin);

    size_t uzunluk = strlen(metin);
    if (uzunluk > 0 && metin[uzunluk - 1] == '\n') {
        metin[uzunluk - 1] = '\0';
        uzunluk--;
    }

    if (uzunluk > 0) {
        char son_karakter = metin[uzunluk - 1];
        printf("Metnin son karakteri: %c\n", son_karakter);
    } else {
        printf("Metin boş.\n");
    }

    return 0;

}