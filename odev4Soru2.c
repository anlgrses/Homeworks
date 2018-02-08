/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   odev4Soru2.c
 * Author: Anil GURSES
 *
 * Created on 17 Kasım 2017 Cuma, 07:37
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    
    //Değişkenler
    int secim1;
    int secim2;
    int koltukNo;
    int toplam1 = 0;
    int toplam2 = 0;
    int toplamGenel = 0;
    int doluluk[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
 
    //Program menüsü
    printf("---------------------------------------------------\nHavayolu rezervasyon programina hosgeldiniz\n---------------------------------------------------\n");
    printf("Sigara icilen bolum icin 1 e basiniz\nSigara icilmeyen icin 2 ye basininz\nCikmak icin 0 a basiniz\n");
    scanf("%d", &secim1);
    
    //Seçilen değerin değerlendirilmesi
    while(secim1 != 0){
        if(secim1 == 1){
            //Koltuk doluluk sayımı ve rezervsyon kısmı 1
            if (toplam1 < 5){
                do{
                    koltukNo = (rand() % 5) + 1;
                }while(koltukNo == 0 && doluluk[koltukNo] == 1);
                if(doluluk[koltukNo] == 0){
                   doluluk[koltukNo] = 1;
                printf("Rezerve edilen koltuk %d\n", koltukNo);
                toplam1++;
                printf("Lutfen baska islem seciniz\n");
                scanf("%d", &secim1); 
                }                
            }else if(toplam1 == 5){
                printf("Sigara icilen bolumde koltuk kalmamistir\nSigara icilmeyen bolumden almak icin 1'e cikmak icin 0'a basin\n");
                scanf("%d", &secim2);
                if (secim2 == 0){
                    printf("Diger ucus 3 saat sonra");
                    return 0;
                }else if(secim2 == 1){
                    secim1 = 2;
                }else{
                    printf("Yanlıs secim yaptiniz.Lutfen tekrar deneyin\n");
                    scanf("%d", secim1);
                }
            }
        }else if(secim1 == 2){
            //Koltuk doluluk sayımı ve rezervsyon kısmı 2
            if(toplam2 < 5){
                do{
                    koltukNo = (rand() % 6) + 5;
                }while(doluluk[koltukNo] == 1 && koltukNo == 0);
                if (doluluk[koltukNo] == 0){
                    doluluk[koltukNo] = 1;
                    toplam2++;
                    printf("Rezerve edilen koltuk %d\n", koltukNo);
                    printf("Lutfen baska islem seciniz\n");
                    scanf("%d", &secim1);
                }
                }
            else
            {
                    printf("Koltuklar dolmustur.Sigara icilen bolumden rezervasyon yapmak icin 1'i cikmak icin 0'a basiniz\n");
                    scanf("%d", &secim2);
                    if(secim2 == 1){
                        secim1 = 1;
                    }else if (secim2 == 0){
                        printf("Diger ucus 3 saat sonra\n");
                        return 0;
                    }else{
                        printf("Yanlis secim yapiniz\nLutfen secim yapiniz\n");
                        scanf("%d", &secim1);
                    }    
            }
            
        }else{
            printf("Yanlis secim yaptiniz.Lutfen tekrar deneyiniz.\n");
            scanf("%d", &secim1);
        }
    }

    return (0);
}

