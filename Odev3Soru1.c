/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Odev3Soru1.c
 * Author: ANIL GURSES
 *
 * Created on 28 Ekim 2017 Cumartesi, 01:20
 */

#include <stdio.h>


/*
 * 
 */
int main() {
	//Deðiþkenler
    int x = 0;
    int i = 0;
    
	//Kullanýcýdan verinin alýnmasý
    printf("Lutfen bir sayi giriniz\n");
    scanf("%d", &x);
    //Döngülerle soruda istenen þekli çizen döngünün yarýsý
    for(; i < x; i++){
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
	//Döngülerle soruda istenen þekli çizen döngünün diðer yarýsý
    for(; 0 <= i; i--){
        for (int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    return (0);
}

