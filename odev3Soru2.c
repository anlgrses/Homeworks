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
	//De�i�kenler
    int rakam, rakam2, rakam3, sayac, j;
    sayac = 0;
    //D�ng�lerle tek say�n�n bulunmas�
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
    //��kt�n�n elde edilmesi
    printf("100 ile 400 arasindaki tek sayi adedi %d \n", sayac);
    
    return (0);
}

