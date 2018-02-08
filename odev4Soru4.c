/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   odev4Soru3.c
 * Author: ANIL GURSES
 *
 * Created on 18 Kasım 2017 Cumartesi, 13:01
 */

#include <stdio.h>


/*
 * 
 */
int main() {
    
    char deger1[50] = "C programlamayi ", deger2[50] = "cok seviyorum ! ! !";
    int a = 0, b = 0;
    
    for(;deger1[a] != '\0'; ++a);
    
    for(;deger2[b] != '\0'; ++b, ++a){
        deger1[a] = deger2[b];
    }
    deger1[a] = '\0';    
    printf("%s\n", deger1);

    
    return 0;
}

