#include <stdio.h>
#define L 3
#define C 2
void preenche(int arr[L][C],int l , int c){
    int i,j;
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            printf("Insira o numero:");
            scanf("%d",&arr[i][j]);
        }
    }
}

float media(int arr[L][C],int l,int c){
    int soma=0,i,j;
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            soma+=arr[i][j];
            
        }
    }
    
    return soma/6.0;  // tem que colocar o 6.0 para pegar o float 
}
    
    
int main (void){
    int arr[L][C];
    int i,j;

    preenche(arr,L,C);
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            printf("%d\n",arr[i][j]);
        }
    }
    printf ("%f\n",media(arr,L,C)); // sempre quando chamar a funcao tem que colocar os parametros    
    
    return 0;    
}


