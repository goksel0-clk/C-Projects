// Ters Merdiven Programı
// Kullanıcıdan satır sayısını alarak, ters merdiven şeklinde karakterler yazdıran bir program.
// Bu program Karamanoglu Mehmetbey Universitesi Yazılım Gelistirme Bölümünden Göksel tarafindan yazilmistir.
#include <stdio.h>

int main() {

    int satir = 0;

    char karakter = 'A';

    printf("Satir Sayisini Giriniz: ");

    scanf("%d", &satir);

    for(int i=satir; 1<=i; i--) { 
        for(int j=0; j<i; j++) { 
            printf("%c", karakter);
        }
        printf("\n");
    }
    return 0;
}