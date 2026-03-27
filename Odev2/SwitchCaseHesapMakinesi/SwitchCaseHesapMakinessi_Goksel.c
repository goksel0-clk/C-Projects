// Switch Case Kullanılarak yapılan Hesap Makinesi Programı
// Kullaniciya yapilacak islemi secmesi icin bir menu gosterilir.
// Kullanici secim yapar ve iki sayi girmesi istenir.
// Secilen isleme gore sonuc ekrana yazdirilir.
// Bu program Karamanoglu Mehmetbey Universitesi Yazılım Gelistirme Bölümünden Göksel tarafindan yazilmistir.


#include <stdio.h>

int main () {
    int secim = 0;
    float sayi1 , sayi2;

    printf("------Hesap Makinesi------\n");
    printf("Yapmak Istediginiz Islemin Numarasini Giriniz\n");
    printf("(1) Toplama\n");
    printf("(2) Cikarma\n");
    printf("(3) Carpma\n");
    printf("(4) Bolme\n");
    printf("Islem Numarasi: ");
    scanf("%d" , &secim);

    if(1<=secim && secim<=4){
        printf("Ilk Sayiyi Giriniz: ");
        scanf("%f" , &sayi1);

        printf("Ikinci Sayiyi Giriniz: ");
        scanf("%f" , &sayi2);

        float toplama = (sayi1+sayi2);
        float cikarma = (sayi1-sayi2);
        float carpma = (sayi1*sayi2);
        float bolme = (sayi1/sayi2);

        switch(secim) {
            case 1:
                printf("Sonuc: %.2f\n", toplama);
                break;

            case 2:
                printf("Sonuc: %.2f\n", cikarma);
                break;

            case 3:
                printf("Sonuc: %.2f\n", carpma);
                break;

            case 4:
                if(sayi2==0) {
                printf("Bolen 0 olamaz!!!");
            } else {
                printf("Sonuc: %.2f\n", bolme);
            }
            break;
        }
    
    } else {
        printf("Gecersiz Bir Numara Sectiniz!");
    }

    
    
}