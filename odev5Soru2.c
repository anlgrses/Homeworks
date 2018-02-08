/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Anil GURSES
 *
 * Created on 27 Kasım 2017 Pazartesi, 15:43
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

void iteratif(int deger);
int ozyinelemeli(int deger);

int main() {
    
    int girdi;
    
    printf("Lutfen basamak sayisini ogrenmek istediginiz sayiyi giriniz:\n");
    scanf("%d", &girdi);
    iteratif(girdi);
    printf("ozyinelemeli fonksiyon ile basamak sayisi %d bulunmustur.", ozyinelemeli(girdi));

    return 0;
}

void iteratif(int deger){
    int basamak = 1;
    while(deger > 10){
        deger = deger / 10;
        basamak++;
    };
    printf("iteratif fonksiyon ile basamak sayisi %d bulunmustur.\n", basamak);
}

int ozyinelemeli(int deger){
    static int basamak = 1;
    
    if(deger > 10){
        basamak++;
        ozyinelemeli(deger/10);
    }else{
        return basamak;
    }
}
