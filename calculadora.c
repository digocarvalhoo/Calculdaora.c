#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "");

	float num1, num2, resultado;
	int op;

	printf("\nDigite o primeiro n�mero: ");
	scanf("%f", &num1);

	printf("\nDigite o segundo n�mero: ");
	scanf("%f", &num2);

	printf("\nEscolha a opera��o desejada:\n \n 1 - Soma \n 2 - Subtra��o \n 3 - Multiplica��o \n 4 - Divis�o\n \n ");
	scanf("%d", &op);

	switch (op)
	{
	case 1:
		resultado = num1 + num2;
		printf("\nA soma dos numeros � %.1f\n", resultado);
		break;
	case 2:
		resultado = num1 - num2;
		printf("\nA subtra��o dos numeros � %.1f\n", resultado);
		break;
	case 3:
		resultado = num1 * num2;
		printf("\nA multiplica��o dos numeros � %.1f\n", resultado);
		break;
	case 4:
		if (num2 != 0)
		{
			resultado = num1 / num2;
			printf("A divis�o dos n�meros � %.1f\n", resultado);
		}
		else
		{
			printf("Erro: divis�o por zero\n");
		}
	default:
		printf("\n opera��o inv�lida, Digite uma opera��o de soma, subtra��o, multiplica��o ou divis�o'! \n");
		break;
	}

	system("pause");
	return 0;
}
