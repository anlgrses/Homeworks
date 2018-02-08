/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   odev5Soru3.c
 * Author: Anıl GÜRSES  
 *
 * Created on 27 Kasım 2017 Pazartesi, 16:20
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int matris1[5][5];
int matris2[5][5];

int menu();
int yeniMenu();
int degerGirildi = 0;
void matrisManuel();
void matrisRastgele();
void matrisToplam();
void matrisCikarma();
void matrisDiagonal();
void matrisCikti();
void matrisTransposesi();
void nCarpim();


int main() {
    printf("Ilk once 1 veya 2 secenekleri ile matrisleri belirleyiniz\n");
    int secim = menu();
    while(secim != 9){
        switch (secim){
            case 1:
                matrisManuel();
                secim = menu();
                break;
            case 2:
                matrisRastgele();
                secim = menu();
                break;
            case 3:
                matrisToplam();
                secim = yeniMenu();
                break;
            case 4:
                matrisCikarma();
                secim = yeniMenu();
                break;
            case 5:
                matrisDiagonal();
                secim = yeniMenu();
                break;
            case 6:
                matrisCikti();
                secim = yeniMenu();
                break;
            case 7:
                matrisTransposesi();
                secim = yeniMenu();
                break;
            case 8:
                nCarpim();
                secim = yeniMenu();
                break;
            default:
                printf("Yanlis secim yaptiniz.Lutfen tekrardan secim yapiniz\n");
                secim = menu();
                break;
        }
    }
    printf("Program sonuna ulasildi\n");    
    return 0;
}

int menu(){
    int secim;
    printf("1-Matris degerlerini manuel girmek icin 1 (2 adet 5x5 matris)\n");
    printf("2-Matris degerlerini rastgele girmek icin 2 (2 adet 5x5 matris) \n");
    printf("3-Girilen matrisleri toplamak icin 3\n");
    printf("4-Girilen matrisleri cikarmak icin 4\n");
    printf("5-Diagonali ekrana bastirmak icin 5 \n");
    printf("6-Tum matrisleri bastirmak icin 6\n");
    printf("7-Matrisin transposesi icin 7\n");
    printf("8-Ilk matrisi girilen n sayisi ile carpmak icin 8\n");
    printf("9-Cikmak icin 9'u tuslayiniz\nGiriniz:\n");
    scanf("%d", &secim);
    return secim;
}

int yeniMenu(){
    int secim;
   printf("Lutfen yeni seciminizi belirtiniz\n");
   scanf("%d", &secim);
   return secim;
}

void matrisManuel(){
    
        for(int i = 0; i < 5; i++){
            for(int j = 0;j < 5; j++){
            printf("1.matris [%d][%d] icin deger giriniz\n", i + 1, j + 1);
            scanf("%d", &matris1[i][j]);
            }
        }
        
        for(int i = 0; i < 5; i++){
            for(int j = 0;j < 5; j++){
            printf("2.matris [%d][%d] icin deger giriniz\n", i + 1, j + 1);
            scanf("%d", &matris2[i][j]);
            }
        }
    
}

void matrisRastgele(){
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            matris1[i][j] = rand();
        }
    }
    
     for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            matris2[i][j] = rand();
        }
    }
}

void matrisToplam(){
    int toplam1 = 0;
    int toplam2 = 0;
    for(int i = 0;i < 5;i++){
        for(int j = 0;j < 5; j++){
            toplam1 = toplam1 + matris1[i][j];
            toplam2 = toplam2 + matris2[i][j];
        }
    }
    printf("1.matrisin elemanlarinin toplama sonucu %d\n", toplam1);
    printf("2.matrisin elemanlarinin toplama sonucu %d\n", toplam2);
}

void matrisCikarma(){
    int toplam1 = 0;
    int toplam2 = 0;
    for(int i = 0;i < 5;i++){
        for(int j = 0;j < 5; j++){
            toplam1 = toplam1 - matris1[i][j];
            toplam2 = toplam2 - matris2[i][j];
        }
    }
    printf("1.matrisin elemanlarinin cikarma sonucu %d\n", toplam1);
    printf("2.matrisin elemanlarinin cikarma sonucu %d\n", toplam2);
}

void matrisDiagonal(){
    int basari = 0;
    int diagonal1 = 0;
    int diagonal2 = 0;
    int i = 0, j = 0;
    while(basari == 0){
        if(i == 4){
            printf("1.matrisin diagonali %d\n2.matrisin diagonali %d\n", diagonal1, diagonal2);
            basari = 1;
        }else{
            diagonal1 = diagonal1 + matris1[i][j];
            diagonal2 = diagonal2 + matris2[i][j];
            i++;
            j++;
        }
    }
}

void matrisCikti(){
    printf("1.matris\n");
    for(int i = 0; i <5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", matris1[i][j]);
        }
        printf("\n");
    }
    printf("2.matris\n");
    for(int i = 0; i <5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", matris2[i][j]);
        }
        printf("\n");
    }
}

void matrisTransposesi(){
        printf("1.matris transposesi\n");
    for(int i = 0; i <5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", matris1[j][i]);
        }
        printf("\n");
    }
    printf("2.matris transposesi\n");
    for(int i = 0; i <5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", matris2[j][i]);
        }
        printf("\n");
    }
}

void nCarpim(){
    int n;
    printf("Lutfen bir sayi giriniz\n");
    scanf("%d", &n);
      for(int i = 0;i < 5;i++){
        for(int j = 0;j < 5; j++){
            matris1[i][j] *= n;
        }
    }
    
    for(int i = 0; i <5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", matris1[j][i]);
        }
        printf("\n");
    }
}