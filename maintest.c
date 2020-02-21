#include <stdio.h>
//programe uma calculadora
int main (){
    char op;
    int operando1, operando2;
    int resultado;
    printf("Qual operação você quer realizar?\n");
    scanf("%c", &op);
    printf("Qual o primeiro operador\n");
    scanf("%d", &operando1);
    printf("Qual o segundo operador\n");
    scanf("%d", &operando2);
    switch (op){
        case '+':
          printf("%d + %d = %d\n", operando1, operando2, operando1 + operando2);
          break;
    }
    

    return 0;
}