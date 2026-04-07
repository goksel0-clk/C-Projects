// Karakter Dizisi Yazdırma Programı
// Bu program Karamanoglu Mehmetbey Universitesi Yazılım Gelistirme Bölümünden Göksel tarafindan yazilmistir.
// Bu kod, önceden tanımlanmış 5 elemanlı char dizisindeki harfleri for döngüsü kullanarak tek tek ekrana yazdıran bir C programıdır.

#include <stdio.h>

int main () {

char a[5] = {'t','a','k','l','a'};
int k = 0;

for (int i=0; i<5; i++) {
   printf("%c\n", a[i]);
}


}