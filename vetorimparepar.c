#include<stdio.h>

int main(){
    
    int vet[10], i, impar = 0, par = 0;

    for(i = 0; i < 10; i++){
        printf("Entre com valores:\n");
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < 10; i++){
        if (vet[i]%2 == 0 ){
            par = par + 1;
        }else{
            impar = impar + 1;
        }
    }

    printf("Numeros impar:%d\nNumeros par:%d", impar, par);

    return 0;
}