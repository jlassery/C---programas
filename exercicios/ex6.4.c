#include <stdio.h>



int strlen2(char* str){ // string precisa de ponteiro char*, pois é um vetor sem tamanho definido
    int cont=0;
    int i=0;
    while(str[i]!='\0'){
        cont+=1;
        i++;

    }
    return cont;
    
    
    
}
int main (void){
    char string[100];
    printf("Insira a string\n");
    scanf("%s",string);
    
    printf("O numero de caracteres e:%d\n",strlen2(string));

    
}

