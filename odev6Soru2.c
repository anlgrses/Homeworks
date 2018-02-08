/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   odev6Soru2.c
 * Author: Anıl GÜRSES
 *
 * Created on 10 Aralık 2017 Pazar, 10:08
 */

#include <stdio.h>


void Karakter_sil(int *sayi,char **tr, char *s[], char c);

int main() {
    char karakter = 'e';
    char *kelime[] = {"deneme"};
    char **degisken;
    int *sayim = 0;
   
    Karakter_sil(&sayim, &degisken, kelime, karakter);
    
    printf("Karakter : %c\nSayi: %d\nYeni kelime: %s\n", karakter, *sayim, degisken);
    return 0;
}

void Karakter_sil(int *sayi,char **tr, char *s[], char c){
    char temp[10];
    int sayim;
    for(int i = 0, j = 0;s[i] != '\0'; i++){
        if(s[0][i] == c){
            sayim = i - j + 1;
        }else{
            temp[j] = s[0][i];
            j++;
        }
    }
    *sayi = &sayim;
    *tr = temp;
    
}