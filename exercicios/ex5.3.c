# include <stdio.h>
void compra(int * conta,int valor){
    *conta=*conta-valor;
    
}

int main (void){
    int c1=0,c2=0,i;
    int compras[]={100,50,80,30,20};
    int* conta;
    printf("Insira o valor do saldo da conta 1:");
    scanf("%d",&c1);
    printf("Insira o valor do saldo da conta 2:");
    scanf("%d",&c2);
    for (i=0;i<5;i++){
        if(c1>c2){
            conta=&c1;
        }else{
            conta=&c2;
        }
        compra(conta,compras[i]);
        printf("O saldo da conta 1 é:%d\n",c1);
        printf("O saldo da conta 2 é:%d\n",c2);
    }
    

    return 0;
}

