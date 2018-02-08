/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ADMIN
 *
 * Created on 14 Kasım 2017 Salı, 16:34
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    
    int dizi[6][6];
    int zar1;
    int zar2;
    int olasilik7 = 0;
    int olasilik2_12 = 0;
    
    for(int i = 0;i < 36000;i++){
        do{
           zar1 = rand() % 6; 
           zar2 = rand() % 6;
        }while(zar1 == 0 && zar2 == 0);
        
        dizi[zar1][zar2] += 1;
    }
    printf("-1 2 3 4 5 6\n");
    printf("-| | | | | |\n");
    for(int i = 1;i < 7; i++ ){
        printf("%d-", i);
        for(int j = 0;j < 6; j++){
            printf("%d ", dizi[i][j]);
        }   
        printf("\n");
    }
    printf("\n");
    return (0);
}

