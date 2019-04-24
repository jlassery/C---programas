# include <stdio.h>

int eh_primo(int n){
    int i,cont=0;
    for (i=1;i<=n;i++){
        if (n%i==0){
            cont+=1;
        }
            
    }
    if (cont==2){
        return 1;
    }else{
        return 0;
    }
}
 
int main (void){
    int n;
    printf("Digite um numero:\n");
    scanf("%d",&n);
    printf("%d\n",eh_primo(n));
    return 0;
}

