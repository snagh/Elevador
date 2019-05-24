#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/* mpp: máximo de pessoas permitidas, qp: quantidade de pessoas dentro do elevador. op: opção
	 porta: estado da porta (0: fechada, 1: aberta) , andar: andar atual do elevador, tandar: total de andares */
	
	int porta, mpp, andar, qp, tandar, op;
	
	tandar = 15;
	andar = 0;
	mpp = 10;
	porta = 0;
	qp = 0;
	
	while(op!=7)
	{
		printf ("---------------------- ELEVADOR ----------------------\n\n1-Mover elevador para:\n2-Abrir porta elevador\n3-Fechar porta elevador\n4-Entrar pessoas: \n5-Sair pessoas:\n6-Mostrar Elevador\n7-Sair\n\n");
		scanf ("%d", &op);
		
		if(op==1)
		{
			printf("DIGITE O ANDAR DESEJADO: ");
			scanf("%d",&andar);
		}
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
