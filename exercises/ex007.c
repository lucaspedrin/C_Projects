#include <stdio.h>

int main(){

    double km, hm, dam, metros, dm, cm, mm;

    printf("Insira um valor em metros: ");
    scanf("%lf", &metros);

    dm = metros * 10;
    cm = dm * 10;
    mm = cm * 10;
    dam = metros / 10;
    hm = dam / 10;
    km = hm / 10;

    printf("%.2lf metros equivalem a:\n", metros);
    printf("%.2lf quilômetros.\n", km);
    printf("%.2lf hectômetros.\n", hm);
    printf("%.2lf decâmetros.\n", dam);
    printf("%.2lf decímetros.\n", dm);
    printf("%.2lf centímetros.\n", cm);
    printf("%.2lf milímetros.\n", mm);

}