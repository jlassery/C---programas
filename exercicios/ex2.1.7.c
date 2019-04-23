# include <stdio.h>

int main (void){
	int v,d,e,pontos,maior=0,menor=1000,i;
	char nome;
	
	for (i=1;i=2;i++){
		printf("Nome do time:\n");
		scanf("%c",&nome);
		printf("Numero vitorias:\n");
		scanf("%d",&v);
		printf("Numero derrotas:\n");
		scanf("%d",&d);
		printf("Numero empates:\n");
		scanf("%d",&e);
		pontos=(v*3)+(d*0)+(e*1);
		if (pontos<menor){
			menor=pontos;
		}
		if(pontos>maior){
			maior=pontos;
		}
	}
	printf ("Times com mais pontos:%c",maior);
	printf ("Times com menos pontos:%c",menor);
	return 0;

}
