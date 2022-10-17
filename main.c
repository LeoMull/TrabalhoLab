#include <stdio.h>
#include <stdlib.h>

int main(){
		int op=0, pc, player;
		
		do{
			pc = rand()%3 + 1;

			do{
				printf("Escolha seu objeto\n 1-PEDRA\n 2-PAPEL\n 3-TESOURA\n");
				scanf("%d",&player);
			}while(player<1 || player>3);
			
			if(player==1) printf("Voce escolheu PEDRA\n");
			else if(player==2) printf("Voce escolheu PAPEL\n");
			       else if(player==3) printf("Voce escolheu TESOURA\n");
			       
			if(pc==1) printf("O computador escolheu PEDRA\n");
			else if(pc==2) printf("O computador escolheu PAPEL\n");
			       else if(pc==3) printf("O computador escolheu TESOURA\n");
			
			
			if(pc==player) printf("Empate!!!\n");
      else if(player==1){
           if(pc==2) printf("O computador VENCEU!!!\n");
						else if(pc==3) printf("Voce VENCEU!!!\n");
			} else if(player==2){
				        if(pc==1) printf("Voce VENCEU!!!\n");
						    else if(pc==3) printf("O computador VENCEU!!!\n");
			                    }	else if(player==3){
                                  if(pc==1) printf("O computador VENCEU!!!\n");
                                  else if(pc==2) printf("Voce VENCEU!!!\n");	
			}				
	

			printf("Deseja jogar novamente? 1- Sim 2-Nao\n");
			scanf("%d", &op);
		}while(op!=2);
		return 0;
}