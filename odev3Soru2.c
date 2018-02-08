/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   odev3Soru2.c
 * Author: ANIL GURSES
 *
 * Created on 28 Ekim 2017 Cumartesi, 01:31
 */

#include <stdio.h>


/*
 * 
 */
int main() {
	//Deðiþkenler
    int rakam, rakam2, rakam3, sayac, j;
    sayac = 0;
    //Döngülerle tek sayýnýn bulunmasý
    for(int i = 100; i < 400; i++ ){
        j = i;
          
       
        rakam = j % 10;
        rakam2 = (j / 10) % 10;
        rakam3 = (j / 100) % 10;
        if(rakam % 2 == 1){
            if(rakam2 % 2 == 1){
                if(rakam3 % 2 == 1){
                    printf("%d \n", i);
                    sayac++;
                    }
                }
            }
            
    }
    //Çýktýnýn elde edilmesi
    printf("100 ile 400 arasindaki tek sayi adedi %d \n", sayac);
    
    return (0);
}

