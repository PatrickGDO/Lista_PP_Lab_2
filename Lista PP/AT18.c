#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c,soma,diferenca,produto,divisao;
    printf("Escolha a opcao \n1- soma de dois numeros\n2- diferenca entre dois numeros\n3- produto entre dois numeros\n4- Divisao entre dois numeros\n : ");
    scanf("%d",&a);
    switch(a){
        case 1:
            printf("Digite o Primeiro numero para ser somado : ");
            scanf("%d",&b);
            printf("Digite o Segundo numero para ser somado : ");
            scanf("%d",&c);
            soma = b+c;
            printf("O Resultado e : %d",soma);break;
        case 2:
            printf("Digite o Primeiro numero para saber a diferenca : ");
            scanf("%d",&b);
            printf("Digite o Segundo numero para saber a diferenca : ");
            scanf("%d",&c);
            if(c>b){
                diferenca = c-b;
                printf("O Resultado e : %d",diferenca);break;
            }
            else{
                diferenca = b-c;
                printf("O Resultado e : %d",diferenca);break;
            }
        case 3:
            printf("Digite o Primeiro numero para saber o produto : ");
            scanf("%d",&b);
            printf("Digite o Segundo numero para saber o produto : ");
            scanf("%d",&c);
            produto = b*c;
            printf("O Resultado e : %d",produto);break;
        case 4:
            printf("Digite o numero que vai ser o denominador : ");
            scanf("%d",&b);
            printf("Digite o numero que vai ser dividido : ");
            scanf("%d",&c);
            if(b>0){
                divisao = c/b;
                printf("O Resultado e : %d",divisao);break;
            }
            else{
                printf("O denominador e Invalido!!");break;
            }
        default: printf("Opcao invalida!!");break;
    }
    return 0;
}