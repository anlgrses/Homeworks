/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   odev3Soru6.c
 * Author: ANIL GURSES
 *
 * Created on 28 Ekim 2017 Cumartesi, 19:27
 */

#include <stdio.h>


/*
 * 
 */
int main() {
    //Değişkenler
    int x, y, z, kalan;
    printf("Lutfen obebini bulunmasini istediğiniz degerleri giriniz(Sadece 2 adet)\n");
    //Kullanıcıdan veri alınması
    scanf("%d %d", &x, &y);
    //Büyük ve küçük değerlerin belirlenmesi
    if(x > y){
        z = y;
        y = x;
        x = z;
    }
    //Oklidin uygulanması
    while(kalan != 0){
        kalan = y % x;
        if(kalan == 0){
            printf("Obeb : %d \n", x);
        }else{
            y = x;
            x = kalan;
        }
        
    }
    
    
    return (0);
}

