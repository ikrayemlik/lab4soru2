#include <stdio.h>
/*  Dizinin adresini ve eleman sayýsýný parametre olarak alan ve dizinin içinde kaç tane tek sayý olduðunu
döndüren rekursif bir fonksiyon yazýnýz. (Global deðiþken kullanmayýnýz */

int teksayibulma(int arr[], int boyut) {
    if (boyut == 0) {
        return 0; // dizide eleman olmadýgýný gosterir
    } else {
        int sonuc = teksayibulma(arr , boyut - 1);
        if (arr[boyut-1] % 2 != 0) {
            return 1 + sonuc; // tek sayi ise 1 attýrýr degilse devam eder
        } else {
            return sonuc;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int boyut = sizeof(arr) / sizeof(arr[0]);

    int teksayi = teksayibulma(arr, boyut); // diziyi cagýrma
    printf("Dizide %d adet tek sayi bulunmaktadir.\n", teksayi);

    return 0;
}
