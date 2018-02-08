/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   odev3Soru3.c
 * Author: ANIL GURSES
 *
 * Created on 28 Ekim 2017 Cumartesi, 10:12
 */

#include <stdio.h>


/*
 * 
 */
int main() {
	//Değikenler
    int x, y, z;
    //Kullanıcıdan verinin alınması
    printf("Lutfen ucgenin kenarlarini giriniz\n");
    scanf("%d %d %d", &x, &y, &z);
    //Verilerin karşılaştırılarak üçgen çeişdinin bulunması
    if((x + y > z || x + z > y || y + z > x || x - y < z || x - z < y || z - y < x) && x > 0 && y > 0 && z > 0){
        if(x == y || x == z || y == z){
            printf("İkizkenar üçgendir\n");
        }else if(x == y == z){
            printf("eskenar ucgendir\n");
        }else{
            printf("Cesitkenar ucgendir\n");
        }
        
    }
    
    
    return (0);
}

