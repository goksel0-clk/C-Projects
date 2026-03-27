// Merdiven Programı
// Kullanıcıdan satır sayısını alarak, merdiven şeklinde karakterler yazdıran bir program.
// Bu program Karamanoglu Mehmetbey Universitesi Yazılım Gelistirme Bölümünden Göksel tarafindan yazilmistir. 
#include <stdio.h>

int main() {

    int satir = 0;

    char karakter = 'X';

    printf("Satir sayisini giriniz: ");

    scanf("%d", &satir);

    for(int i=1; i<=satir; i++) { 
        for(int j=0; j<i; j++) { 
            printf("%c", karakter);
        }
        printf("\n");
    }
    return 0;
}