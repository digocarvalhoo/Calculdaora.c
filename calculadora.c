#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	float num1,num2,resultado;
	int op;
	
	printf ("\nDigite o primeiro número: ");
	scanf ("%f", &num1);
	
    printf ("\nDigite o segundo número: ");
    scanf ("%f", &num2);
    
    printf ("\nEscolha a operação desejada:\n \n 1 - Soma \n 2 - Subtração \n 3 - Multiplicação \n 4 - Divisão\n \n ");
    scanf ("%d", &op);
    
    switch (op)
	{
		case 1 :
			resultado= num1+num2;
			printf ("\nA soma dos numeros é %.1f\n", resultado);
			break;
		case 2:
			resultado=num1-num2;
			printf ("\nA subtração dos numeros é %.1f\n", resultado);
			break;
		case 3:
			resultado=num1*num2;
			printf ("\nA multiplicação dos numeros é %.1f\n", resultado);
			break;
		case 4:
			 if (num2 != 0) {
                resultado = num1 / num2;
                printf("A divisão dos números é %.1f\n", resultado);
            } else {
                printf("Erro: divisão por zero\n");
            }
		default:
			printf ("\n operação inválida, Digite uma operação de soma, subtração, multiplicação ou divisão'! \n");
			break;
	}
	
	system("pause");
	return 0;	
}

