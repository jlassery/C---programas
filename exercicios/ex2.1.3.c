# include <stdio.h>

int main (void){
	float valdol,preco;
	printf("Insira o preco  do celular em dolares:");
	scanf("%f",&valdol);
	preco=valdol*3.17;
	if (preco<1000){
		printf("Bom negocio \n");
	}else{
		printf("Nao é um bom negocio \n");
	}

	return 0;


}
