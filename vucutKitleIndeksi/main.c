#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float boy;
	int kilo,sonuc;
	
	printf("Boyunuzu giriniz: ");
	scanf("%f",&boy);
	printf("Kilonuzu giriniz: ");
	scanf("%d",kilo);
	
	    sonuc = kilo / (float) (boy * boy);
    printf("Beden Kitle indeksi = %d\n",sonuc);
    
    if(sonuc < 18)
        printf("Zayif");
    
    else if(sonuc < 25)
        printf("Normal");
    
    else if(sonuc < 30)
        printf("Hafif sisman");
    
    else if(sonuc < 35)
        printf("Sisman");
    
    else
        printf("Obez");
    
	
}
