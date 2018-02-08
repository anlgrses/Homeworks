/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   odev6soru1.c
 * Author: Anil GURSES
 *
 * Created on 09 Aralık 2017 Cumartesi, 20:21
 */

#include <stdio.h>


/*
 * 
 */
void first_last(char *s[], int n, char **first, char **last);

int main() {
    int size = 8;
    char **maxS;
    char **min;
    char *array[] = {"hello", "world", "today", "is", "a", "very", "nice", "day"};
    
    first_last(array,size,&min, &maxS);
    
    printf("Ilk kelime %s ve son kelime %s dir\n", min, maxS);
    
    return 0;
}

void first_last(char *s[], int n, char **first, char **last){
    int i = 0;
    *first = s[i];
    *last = s[i];
    for(; i < n; i++){


        if(s[i][0] < *first[0]){
            *first = s[i];
        }
        if(s[i][0] > *last[0]){
                *last = s[i];
        }
    }
}