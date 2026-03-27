// Girilen iki sayının yerlerini değiştiren program
// Bu program Karamanoglu Mehmetbey Universitesi Yazılım Gelistirme Bölümünden Göksel tarafindan yazilmistir. 
#include <stdio.h>

int main() {
    float sayi1, sayi2, gecici;

    // Kullanıcıdan iki sayı al
    printf("Birinci sayiyi girin: ");
    scanf("%f", &sayi1);

    printf("Ikinci sayiyi girin: ");
    scanf("%f", &sayi2);

    // Sayıları değiştirme (swap)
    gecici = sayi1;
    sayi1 = sayi2;
    sayi2 = gecici;

    // Sonucu yazdır
    printf("Sayilar degistirildi:\n");
    printf("Birinci sayi: %f\n", sayi1);
    printf("Ikinci sayi: %f\n", sayi2);

    return 0;
}