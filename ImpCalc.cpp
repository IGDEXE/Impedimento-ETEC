#include <stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
	int Tc=0, Pxc=0, Pyc=0,Px=0,Py=0;
	printf("Informe o tamanho do campo :");
	scanf("%d",&Tc);
	printf("\nInforme a distancia do jogador de ataque da linha de fundo :");
	scanf("%d", &Pxc);
	printf("\nInforme a distancia do jogador de defesa da linha de fundo :");
	scanf("%d", &Pyc);
	Px = (Tc - Pxc);
	Py = (Tc - Pyc);
	if (Px > Py)
	{
		printf("\nO jogador esta impedido.");
	}
	if (Px < Py)
	{
		printf("\nO jogador nao esta impedido.");
	}
	if (Px = Py)
    {
        printf("\nO jogador esta na mesma linha.");
    }
	return 0;
}