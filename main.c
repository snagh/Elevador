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
	printf("O elevador esta no ANDAR: %d, a PORTA esta FECHADA e esta com uma carga de %d pessoas\n", andar, qp);
	
	while(op!=7)
	{
		printf ("---------------------- ELEVADOR ----------------------\n\n1-Mover elevador para:\n2-Abrir porta elevador\n3-Fechar porta elevador\n4-Entrar pessoas: \n5-Sair pessoas:\n6-Mostrar Elevador\n7-Sair\n\n");
		scanf ("%d", &op);
		
		if(op==1)
		{
			printf("DIGITE O ANDAR DESEJADO: ");
			scanf("%d",&andar);
			if(andar==0)
			{
				printf(" O elevador ja esta no andar solicitado\n Va para o proximo passo.\n");
			}
			
		}
		if (op==2)
		{	
			porta=1;
			printf("Porta aberta!\n");		
		}
		
		
		if(op==4)
		{
			if(porta==1)
			{
				printf("QUANTAS PESSOAS QUEREM ENTRAR? \n");
				scanf("%d", &qp);
				if(qp>mpp)
				{
					printf("NUMERO MAXIMO DE PESSOAS PERMITIDAS ULTRAPASSADO\n");
				}
			}
			else
			{
				printf("ABRA A PORTA!");
			}
		}
		
		if(op==3)
		{
			porta=0;
		}
		
		if(op==5)
		{
			if(porta==1)
			{
				qp=0;	
			}
						
		}
		
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
