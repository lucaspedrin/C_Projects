#include <stdio.h>

int main(){

    int num, mult;

    printf("Digite um número: ");
    scanf("%d", &num);

    for (int i=1; i<=10; i++){
        mult = num * i;
        printf("%d x %d = %d\n", num, i, mult);        
    }
    
    return 0;
}