# include <stdio.h>

int eh_primo(int n){
    int i,cont=0;
    for (i=1;i<=n;i++){
        if (n%i==0){
            cont+=1;
        }
            
    }
    if (cont<=2){
        return 1;
    }else{
        return 0;
    }
}

int todos_os_primos(int max){
    int i;
    for (i=1;i<=max;i++){
        if (eh_primo(i)==1){
            printf("%d\n",i);
        }        
    }    
}
 

int main (void){
    int maximo;
    printf("Digite um numero máximo:\n");
    scanf("%d",&maximo);
    todos_os_primos(maximo);
    return 0;
}

