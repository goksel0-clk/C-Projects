// If Kullanılarak yapılan Hesap Makinesi Programı
// Kullaniciya yapilacak islemi secmesi icin bir menu gosterilir.
// Kullanici secim yapar ve iki sayi girmesi istenir.
// Secilen isleme gore sonuc ekrana yazdirilir.
// Bu program Karamanoglu Mehmetbey Universitesi Yazılım Gelistirme Bölümünden Göksel tarafindan yazilmistir.

#include <stdio.h>

int main()
{
    int sayi1, sayi2;
    char islem;
    int sonuc;

    printf("Yapmak istediginiz islemi seciniz : ");
    
    printf("\n1. Toplama\n2. Cikarma\n3. Carpma\n4. Bolme\n");
    scanf(" %c", &islem);

    
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi1);

    printf("Ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);

    if(islem == '1') {
        sonuc = sayi1 + sayi2;
        printf("Sonuc: %d\n", sonuc);
    } else if(islem == '2') {
        sonuc = sayi1 - sayi2;
        printf("Sonuc: %d\n", sonuc);
    } else if(islem == '3') {
        sonuc = sayi1 * sayi2;
        printf("Sonuc: %d\n", sonuc);
    } else if(islem == '4') {
        if(sayi2 != 0) {
            sonuc = sayi1 / sayi2;
            printf("Sonuc: %d\n", sonuc);
        } else {
            printf("Hata: Sayi 2 sifira bolunemez.\n");
        }
    } else {
        printf("Gecersiz islem secimi.\n");
    }

}
