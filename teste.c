#include <stdio.h>
#include <math.h>

int main() {
    int i, j, menu = -1;
    printf("Digite o valor de X: ");
    scanf("%d", &i);
    printf("\nDigite o valor de Y: ");
    scanf("%d", &j);
    
    while (menu != 0)
    {
        printf("\nEscolha uma opcao do menu:\n");
        printf("1 - Soma X + Y\n2 - Subtracao X - Y\n0- Sair\n");
        scanf("%d", &menu);

        if (menu == 1) {
            printf("Soma: %d\n", i + j);
        } 
        else if (menu == 2) {
            printf("Subtracao: %d\n", i - j);
        } 
    }
    

    return 0;
}
