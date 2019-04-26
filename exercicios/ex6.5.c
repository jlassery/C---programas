#include <stdio.h>

int strlen2(char* str){
    int cont=0;
    int i=0;
    while(str[i]!='\0'){
        cont+=1;
        i++;

    }
    return cont;
    
    
    
}

void strjoin2 (char* d, char* o1, char* o2){
    int i;
    int tamanhoo1,tamanhoo2;
    
    tamanhoo1=strlen2(o1);
    tamanhoo2=strlen2(o2);
    for (i=0;i<tamanhoo1;i++){
        d[i]=o1[i];
    }
    
    for (i=0;i<tamanhoo2;i++){
        d[i+tamanhoo1]=o2[i];
    }
    d[tamanhoo1+tamanhoo2]='\0';
    printf("Nova string: %s",d);

}



int main (void){
    char o1[100],o2[100],d[100];
    printf("Insira a string de origem 1: \n");
    scanf("%s",o1);
    printf("Insira a string de origem 2: \n");
    scanf("%s",o2);


    strjoin2(d,o1,o2);
    
    return 0;

    
}

