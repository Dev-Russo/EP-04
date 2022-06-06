#include<stdio.h>

int main()
{
    int countVogal, countConsoante, i, k, l;
    char entrada[10];
    
    countConsoante = 0;
    countVogal = 0;
    k = 0;
    l = 0;

    for(i = 0; i < 10; i++)
    {   
        printf("Entre com uma consoante ou vogal:\n");
        fflush(stdin);
        scanf("%c", &entrada[i]);
    }

    

    for ( i = 0; i < 10; i++)
    {
        switch (entrada[i])
        {
        case 'a':
            countVogal = countVogal + 1;
            break;
        case 'e':
            countVogal = countVogal + 1;
            break;
        case 'i':
            countVogal = countVogal + 1;
            break;
        case 'o':
            countVogal = countVogal + 1;
            break;
        case 'u':
            countVogal = countVogal + 1;
            break;
        
        default:
            countConsoante = countConsoante + 1;
            break;
        }
    }
    
    char vogal[countVogal], consoante[countConsoante];
    
    for ( i = 0; i < 10; i++)
    {
        switch (entrada[i])
        {
        case 'a':
            vogal[k++] = entrada[i];
            break;
        case 'e':
            vogal[k++] = entrada[i];
            break;
        case 'i':
            vogal[k++] = entrada[i];
            break;
        case 'o':
            vogal[k++] = entrada[i];
            break;
        case 'u':
            vogal[k++] = entrada[i];
            break;
        
        default:
            consoante[l++] = entrada[i];
            break;
        }
    }

    
    for ( k = 0; k < countVogal; k++)
    {
        printf("Vogal:%c,\n", vogal[k]);
    }
    
    for ( l = 0; l < countConsoante; l++)
    {
        printf("Consoante:%c,\n", consoante[l]);
    }
    
    return 0;
}