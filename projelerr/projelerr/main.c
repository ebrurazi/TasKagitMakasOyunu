#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    int oyuncuSecimi,bilgisayarSecimi;
    int devamEt=1;
    int oyuncuPuanı=0,bilgisayarPuanı=0;
    
    srand(time(NULL));//Oyun her başladğında farklı değerler atar
    
    printf("**************TAŞ KAĞIT MAKAS OYUNU**************\n\n");

    while(devamEt != 0) {
        
        bilgisayarSecimi=1+rand()%3;//1-TAŞ 2-KAĞIT 3-MAKAS arasından rastgele bir seçim verecek
        
        printf("Taş mı? Kağıt mı? Makas mı?Giriniz(1-3 arasında) : ");
        scanf("%d",&oyuncuSecimi);
        // Bilgisayar ve Oyuncu 1 2 3 seçimlerinde oyunun kimin kazanıp kazanamdığına burada kara veriypruz.
        if(bilgisayarSecimi==1){
            if(oyuncuSecimi==1){
                printf("Berbabere\n");
            }
            else if (oyuncuSecimi==2){
                oyuncuPuanı++;
                printf("Oyuncu kazandı.Tebrikler'\n");
            }
            else if (oyuncuSecimi==3){
                bilgisayarPuanı++;
                printf("Bilgisayar kazandı.Tebrikler!\n");
            }
        }
        else if (bilgisayarSecimi==2){
            if(oyuncuSecimi==1){
                bilgisayarPuanı++;
                printf("Bilgisayar kazandı.Tebrikler!\n");
            }
            else if (oyuncuSecimi==2){
                printf("Berbabere\n");
            }
            else if (oyuncuSecimi==3){
                oyuncuPuanı++;
                printf("Oyuncu kazandı.Tebrikler'\n");
            }
        }
        else if (bilgisayarSecimi==3){
            if(oyuncuSecimi==1){
                oyuncuPuanı++;
                printf("Oyuncu kazandı.Tebrikler'\n");
            }
            else if (oyuncuSecimi==2){
                bilgisayarPuanı++;
                printf("Bilgisayar kazandı.Tebrikler!\n");
            }
            else if (oyuncuSecimi==3){
                printf("Berbabere\n");
            }
        }
        printf("\nÇıkmak istiyorsunuz 0'a basınız.Yoksa başka bir rakam'a basınız : ");//Devam mı etmek istiyor yoksa çıkmak mı diye soruyoruz
        scanf("%d",&devamEt);
        printf("\n");
    }
    
    printf("\nGENEL SKOR\n");//Oyun bittiğinde genel skoru yazıyoruz
    printf("Bilgisayar = %d\n",bilgisayarPuanı);
    printf("Oyuncu = %d\n",oyuncuPuanı);
    
    if(oyuncuPuanı>bilgisayarPuanı)//Kimin kazandığına karar veriyoruz
        printf("Oyunu, oyuncu kazandı!\n");
    else if (bilgisayarPuanı>oyuncuPuanı)
        printf("Oyunu, bilgisayar kazandı!\n");
    else if (oyuncuPuanı==bilgisayarPuanı)
        printf("Oyun berabere!\n");
    printf("\n");
    return 0;
}
