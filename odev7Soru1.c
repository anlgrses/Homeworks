/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   odev7Soru1.c
 * Author: Anıl GÜRSES
 *
 * Created on 18 Aralık 2017 Pazartesi, 18:52
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */

void kelime_ara(char kelime[], char input[]);

int main() {
    
    char inputString[250], kelime[50];
    
    printf("Paragrafı Giriniz: \n");
    gets(inputString);
    printf("Girilen paragraf:\n %s", inputString);
    printf("\nAramak istediginiz kelimeyi giriniz: \n");
    gets(kelime);
    printf("Girilen kelime = %s \n", kelime);
    
    kelime_ara(kelime, inputString);
    
    return 0;
}

void kelime_ara(char kelime[], char input[]){
    int adet = 0;
    char *token;
    token = strtok(input, " ");
    
    while(token != NULL){
        token = strtok(NULL, " ");
        if(token != NULL){
           int x = strcmp(token , kelime);
           if(x == 0){
               adet++;
           }
        }      
    }
    
    
    printf("ARANILAN KELIME : %s \nPARAGRAFTA %d TANE %s KELIMESI VARDIR\n", kelime, adet, kelime);
}