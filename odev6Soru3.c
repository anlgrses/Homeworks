/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Anıl GÜRSES
 *
 * Created on 16 Aralık 2017 Cumartesi, 10:09
 */

#include <stdio.h>


/*
 * 
 */

int tersten_ayni_mi(char *str[]);

int main() {
    char *str[] = {"kucuk"};
    int cevap = tersten_ayni_mi(str);
    if(cevap == 1){
        printf("%s kelimesinin tersten yazilisi aynidir.", str[0]);
    }else{
        printf("%s kelimesinin tersten yazilisi ayni degildir.", str[0]);
        return 0;
    }
    
    return 0;
}

int tersten_ayni_mi(char *str[]){
    int sayim = 0;
    int esit = 0;
    char *kopya[10];
    for(int i = 0; str[0][i] != '\0'; i++){
        sayim++;
        kopya[0][i] = str[0][i];
    }
    int temp = sayim;
    sayim = sayim / 2;
    int uzunluk = sayim;
    for(int i = 0; i < sayim; i++, temp--){
        if(str[0][i] == kopya[0][temp - 1]){
            esit++;
        }else{
            return 0;
        }
    }
    if(esit == sayim){
        return 1;
    }else{
        return 0;
    }
}