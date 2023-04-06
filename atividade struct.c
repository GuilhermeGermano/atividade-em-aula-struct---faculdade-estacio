#include <stdio.h>
int main(void)
{
    struct{
        float numproj;
        int saldo;
        int valor;
        int escolha;
        float receita;
        float despesa;
    }func;

printf("\n\nDigite o numero do projeto: ");
scanf("%f", &func.numproj);

printf("\n\nDigite seu saldo: ");
scanf("%d", &func.saldo);

printf("\n\n Digite 1 para receita, 2 para despesa:");
scanf("%d", &func.escolha);
    
    if (func.escolha == 1) {
        printf("Digite o valor da receita: ");
        scanf("%f", &func.receita);
        func.receita += func.saldo;
        printf("Saldo atual:%d", &func.saldo);
    }
    else if(func.escolha = 2) {
        printf("Digite o valor da despesa: ");
        scanf("%f", &func.despesa);
        func.despesa -= func.saldo;
        printf("Saldo atual: %d", &func.saldo);
    }
    else{
        printf("Opção invalida!");
    }


printf("\n\nDigite o valor: ");
scanf("%d", &func.valor);




   
   
  
   return 0; 

}
