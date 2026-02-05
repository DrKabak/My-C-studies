#include <stdio.h>

int main()
{

    float boy, kilo, vki; /*Kod üzerinde kullanılacak terimleri float ile ilk olarak belirtiyoruz*/

    printf("Metre cinsinden boyunuzu girin:"); /*kod çalışınca gözükecek ve kullanılıcının yazabilmesini sağlayan kodları buraya giriyoruz*/
    scanf("%f", &boy);
    printf("Kilogram cinsinden boyunuzu girin:"); /*Boyunuzu :D*/
    scanf("%f", &kilo);

    vki = kilo / (boy * boy); /*kod süresince yapılacak  matematiksel işlemi buraya yazıyoruz*/

    if (vki < 18.5) /*işlemin sonuç çıktısını hesaplayacak son kod dizimi de en sona yazılıyor*/
    {
        printf("Zayif\n");
    }
    else if (vki >= 18.5 && vki <= 24.9)
    {
        printf("Saglikli\n");
    }1.73
    else if (vki >= 25 && vki <= 29.9)
    {
        printf("Sisiman\n");
    }
        else if (vki >= 30 && vki <= 39.9)
        {
            printf("Obez\n");
        }
        else
        {
            printf("Asiri Obez\n");
        }

        return 0;   /*çıktı bir kez tekrar ediyor*/
    }