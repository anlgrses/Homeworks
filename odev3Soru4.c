/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   odev3Soru4.c
 * Author: ADMIN
 *
 * Created on 28 Ekim 2017 Cumartesi, 19:08
 */

#include <stdio.h>

/*
 * 
 */
int main(int argc, char** argv) {
    //Deðiþken
    int x = 0;
	//Kullanýcýdan verinin alýnmasý
    printf("lutfen bir deger giriniz\n");
    scanf("%d", &x);
    //For döngüsüyle istenen þeklin çizilmesi için aþaðýdaki method uygulanmýþtýr
    for(int i = x; 0 <= i; i--){
        for(int j = i; 0 < j; j--){
            printf("%d", i);
        }
        printf("\n");
    }
    
    return (0);
}

