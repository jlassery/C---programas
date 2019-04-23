# include <stdio.h>
int main (void){
	int n1,n2,i;
	printf("Escolha n1:");
	scanf("%d",&n1);
	printf("Escolha n2:");
	scanf("%d",&n2);
	for(i=n2;i>=n1;i--){
		if (i%2==0){
			printf("%d\n",i);
            
			
		}

		
	}
	
	return 0;
		
}
