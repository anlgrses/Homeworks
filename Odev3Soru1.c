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
	//De�i�kenler
    int x = 0;
    int i = 0;
    
	//Kullan�c�dan verinin al�nmas�
    printf("Lutfen bir sayi giriniz\n");
    scanf("%d", &x);
    //D�ng�lerle soruda istenen �ekli �izen d�ng�n�n yar�s�
    for(; i < x; i++){
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
	//D�ng�lerle soruda istenen �ekli �izen d�ng�n�n di�er yar�s�
    for(; 0 <= i; i--){
        for (int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    return (0);
}

