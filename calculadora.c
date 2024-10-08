#include <stdio.h>

int soma(int x, int y){
    return x + y;
}

int subtracao(int x, int y){
    return x - y;
}

int multiplicacao(int x, int y){
    return x * y;
}

int divisao(int x, int y){
    if (y != 0)
    {
        return x / y;
    }

    else
    {
        printf("Essa divisao nao eh possivel.\n");
        return -1;
    }
      
}

int main(){

    int num_1, num_2, resultado, control;
    char resume = 's';

    while (resume == 's')
    {
        printf("Digite o comando: ");
        scanf("%d", &control);

        if (control != 1 && control != 2 && control != 3 && control != 4)
        {
            printf("Escolha um comando adequado.\n");
        }
        
       else if (control == 1)
       {
            printf("Digite o primeiro valor para soma: ");
            scanf("%d", &num_1);
            printf("Digite o segundo valor para soma: ");
            scanf("%d", &num_2);

            resultado = soma(num_1, num_2);
            printf("%d + %d = %d\n", num_1, num_2, resultado);
       }
       

        else if (control == 2)
        {
            printf("Digite o primeiro valor para subtracao: ");
            scanf("%d", &num_1);
            printf("Digite o segundo valor para subtracao: ");
            scanf("%d", &num_2);

            resultado = subtracao(num_1, num_2);
            printf("%d - %d = %d\n", num_1, num_2, resultado);
        }
        
        else if (control == 3)
        {
            printf("Digite o primeiro valor para produto: ");
            scanf("%d", &num_1);
            printf("Digite o segundo valor para produto: ");
            scanf("%d", &num_2);

            resultado = multiplicacao(num_1, num_2);
            printf("%d * %d = %d\n", num_1, num_2, resultado);
        }
        
        else if (control == 4)
        {
            printf("Digite o primeiro valor para divisao: ");
            scanf("%d", &num_1);
            printf("Digite o segundo valor para divisao: ");
            scanf("%d", &num_2);

            resultado = divisao(num_1, num_2);
            if (resultado != -1)
            {
                printf("%d / %d = %d\n", num_1, num_2, resultado);
            }
            
        }

    printf("Digite \'s\' para continuar e qualquer outro dado para interromper. \n"); 
    printf("Voce quer fazer mais uma conta? \n");
    scanf(" %c",&resume);
        
    }
    

return 0;
}
