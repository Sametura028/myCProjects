#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
float pi=3.14,alan,cevre;
int yaricap;
printf("Yaricapi degerini giriniz:  ");
scanf("%d",&yaricap);
alan=pi*(float)(yaricap*yaricap);
cevre=2*pi*yaricap;
printf("Dairenin cevresi= %f\n",cevre);
printf("Dairenin alani= %f",alan);
}
