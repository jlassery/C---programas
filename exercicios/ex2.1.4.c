# include <stdio.h>

int main (void){
	int n,soma=0;
	printf("Insira um numero:");
	scanf("%d",&n);
	while(n!=0){
		soma+=n;
		printf("Insira um numero:");
		scanf("%d",&n);
	}
	printf ("A soma é:%d\n",soma);
	return 0;

}
