#include<stdio.h>

int  main()
{   
    int i = 0, ver;
    float vet[15];

    printf("Entre com o numero 1 ou 2\n");
    scanf("%d", &ver);

    if(ver <= 0 || ver >= 3){
        printf("Digite um valor valido");
    }


    switch (ver)
    {
    case 1:
         for(i = 0; i < 15; i++){
            vet[i] = i + 1;
            printf("Valor:%.1f\n", vet[i]);
        }
        break;
    case 2:
         for(i = 15; i >= 2; i--){
            vet[i] = i - 1;
            printf("Valor:%.1f\n", vet[i]);
        }
        break;
    default:
        break;
    }
    

    
    
    return 0;
}