#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//    int sayi1,sayi2;
//    int secim;
//    
//    printf("1.Sayiyi seciniz: ");
//    scanf("%d",&sayi1);
//    printf("2.Sayiyi giriniz: ");
//    scanf("%d",&sayi2);
//    
//    printf("\n******Seciminizi giriniz******\n");
//    printf("1.TOPLAMA\n");
//    printf("2.CIKARMA\n");
//    printf("3.CARPMA\n");
//    printf("4.BOLME\n");
//    
//    printf("Seciminizi giriniz: ");
//    scanf("%d",&secim);
//    
//    if(secim == 1){
//        printf("Toplama isleminn sonucu %d dir.", sayi1 + sayi2);
//    }
//    else if(secim == 2){
//        printf("C?karma isleminin sonucu %d dir.", sayi1 - sayi2);
//    }
//    else if(secim == 3){
//        printf("Carpma isleminin sonucu %d dir.", sayi1 * sayi2);
//    }
//    else if(secim == 4){
//        printf("Cikarma isleminin sonucu %d dir.", sayi1 / sayi2);
//    }
//    else{
//        printf("Dogru secim yapiniz !!!");
//    }
//    

    int sayi1,sayi2;
    int islem;
    
    printf("1.Sayiyi giriniz:");
    scanf("%d",&sayi1);
    printf("2.Sayiyi giriniz: ");
    scanf("%d",&sayi2);
    
 
    printf("\n\n1.Toplama\n");
    printf("2.Cikarma\n");
    printf("3.Bolme\n");
    printf("4.Carma\n");
    
    printf("\nIslemi seciniz:");
    scanf("%d",&islem);
    
    switch(islem){
        case 1:
            printf("Toplama isleminin sonucu : %d",sayi1 + sayi2);
            break;
        case 2:
            printf("C?karma isleminin sonucu : %d",sayi1 - sayi2);
            break;
        case 3:
            printf("Bolme isleminin sonucu : %f", (float) sayi1 / (float) sayi2);
            break;
        case 4:
            printf("Carpma isleminin sonucu : %d", sayi1 * sayi2);
            break;
        default:
            printf("Lutfen gecerli bir sayi giriniz..");
    }


}
