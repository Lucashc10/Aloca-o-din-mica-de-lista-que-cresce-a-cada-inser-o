/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Escreva um programa que simule uma lista de números inteiros usando alocação dinâmica
//(vetor que cresce a cada inserção).
#include <stdio.h>
#include <stdlib.h>



int main()
{
    int *lista = NULL; //Vetor que sera alocado DINAMICAMENTE
    int tamanho = 0; //Tamanho atual da lista
    int num; //Numero a ser inserido
    char opc;
    
    do{
        //Capturando o numero que o usuario quer inserir
        printf("digite um numero: ");
        scanf("%d", &num);
        
        //Aumenta o tamanho e realoca o espaço
        tamanho++;
        lista = realloc(lista, tamanho * sizeof(int));
        
        //Coloca o numero no fim da lista
        // - 1 por causa que a lista começa na posição 0;
        lista[tamanho - 1] = num;
        
        //Imprime a lista até agora
        for(int i = 0; i < tamanho; i++){
            printf("%d ", lista[i]);
        }
        //Pulando a linha pos mostrar o vetor
        printf("\n");
        
        printf("deseja continuar a inserir numeros? (S/N)");
        scanf(" %c", &opc);
    //Quando for caracter usa-se aspas simples
    }while(opc == 'S' || opc == 's');
    
    //Liberando a memoria da alocalão dinamica
    free(lista);
    
    return 0;
}