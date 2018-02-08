/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   odev3Soru5.c
 * Author: ANIL GURSES
 *
 * Created on 28 Ekim 2017 Cumartesi, 19:18
 */

#include <stdio.h>


/*
 * 
 */
int main() {
	//Deðiþkenler
	int x = 53, y, success = 1;
	
    printf("-----------------------------\n TAHMIN OYUNUNA HOSGELDINIZ \n-----------------------------\n \n \n");
    printf("Lutfen tahmin ettiginiz degeri giriniz\n");
    //While döngüsü ile kullanýcýdan doðru veri alýna kadar deðer girdisinin saðlanmasý ve yazdýklarýna istinaden geri dönüþ verilmesi
    while(success == 1){
        printf("Degeriniz:\n");
        scanf("%d", &y);
        if(y > x){
            printf("Tahminiz buyuk daha kucuk bir sayi deneyin\n");
        }else if(y < x){
            printf("Tahminiz kucuk daha buyuk bir sayi deneyin\n"); 
        }else if(x == y){
            printf("Dogru degeri girdiniz\n");
            success = 0;
        }
    }

    return (0);
}

