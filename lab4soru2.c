#include <stdio.h>
/*  Dizinin adresini ve eleman say�s�n� parametre olarak alan ve dizinin i�inde ka� tane tek say� oldu�unu
d�nd�ren rekursif bir fonksiyon yaz�n�z. (Global de�i�ken kullanmay�n�z */

int teksayibulma(int arr[], int boyut) {
    if (boyut == 0) {
        return 0; // dizide eleman olmad�g�n� gosterir
    } else {
        int sonuc = teksayibulma(arr , boyut - 1);
        if (arr[boyut-1] % 2 != 0) {
            return 1 + sonuc; // tek sayi ise 1 att�r�r degilse devam eder
        } else {
            return sonuc;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int boyut = sizeof(arr) / sizeof(arr[0]);

    int teksayi = teksayibulma(arr, boyut); // diziyi cag�rma
    printf("Dizide %d adet tek sayi bulunmaktadir.\n", teksayi);

    return 0;
}
