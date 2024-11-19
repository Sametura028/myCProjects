#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int maas, zamOrani, yenimaas;

printf("Maasi Giriniz: ");
scanf("%d",&maas);
printf("Zam yuzdesini giriniz (0,100): ");
scanf("%d",&zamOrani);
yenimaas=maas+(maas*zamOrani/100);
printf("Yeni maasiniz = %d",yenimaas);
}
