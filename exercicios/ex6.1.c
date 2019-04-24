# include <stdio.h>

void preenche(int* xs,int n){
    /*int aux;
    for (i=0;i<n;i++){
        scanf("%d",&aux);
        *(xs+i)=aux;
    }*/
    int i;
    for (i=0;i<n;i++){
        printf("Insira o valor:");
        scanf("%d",(xs+i));
    }
    
}
float media(int* xs,int n){
    int i,cont=0;
    float media1;
    for(i=0;i<n;i++){
        cont+=*(xs+i);    
    }
    media1=cont/n;
    return media1;
}
int main (void){
    int n;
    int vec[100];
    printf("Insira o valor de n:");
    scanf("%d",&n);
    preenche(vec,n);
    printf("A media é: %f\n",media(vec,n));
    return 0;
}

