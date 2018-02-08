/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   odev7Soru2.c
 * Author: Anıl GÜRSES
 *
 * Created on 19 Aralık 2017 Salı, 00:10
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * 
 */

void matrisGir(int boyut1, int boyut2, int **matris);
void matrisTopla(int **matris1,int **matris2,int boyut1,int boyut2);
int main() {
    int boyut1, boyut2;
    printf("1.Matris icin bosluk birakarak boyut belirtiniz.\n");
    scanf("%d %d", &boyut1, &boyut2);
    
    int **matris1, **matris2;
    
    
    matris1 = (int **) malloc(boyut1 * sizeof(int));
    matris2 = (int **) malloc(boyut1 * sizeof(int));
    
    for(int i = 0; i < boyut2; i++){
        matris1[i] = (int *) malloc(boyut2 * sizeof(int));
        matris2[i] = (int *) malloc(boyut2 * sizeof(int));
    }
    
    printf("1.Matris icin degerler\n");
    matrisGir(boyut1, boyut2, matris1);
    printf("2.Matris icin degerler\n");
    matrisGir(boyut1, boyut2, matris2);
    
    printf("Matris Toplandi\n");
    matrisTopla(matris1, matris2, boyut1, boyut2);
    
    for(int i = 0; i < boyut1; i++){
        for(int x = 0; x < boyut2; x++){
            free(matris1[i][x]);
            free(matris2[i][x]);
        }
    }
    
    printf("Programin sonu.\n");
    
    return 0;
}

void matrisGir(int boyut1, int boyut2, int **matris){
    for(int i = 0; i < boyut1; i++){
        for(int x = 0; x < boyut2; x++){
            printf("Lutfen %d satir %d sutun icin deger giriniz.\n", i + 1, x + 1);
            scanf("%d", &matris[i][x]);
        }
    }
    
}

void matrisTopla(int **matris1,int **matris2,int boyut1, int boyut2){
    for(int i = 0; i < boyut1; i++){
        for(int x = 0; x < boyut2; x++){
            int toplam = matris1[i][x] + matris2[i][x];
            printf("%d  ", toplam);
        }
        printf("\n");
    }        

}