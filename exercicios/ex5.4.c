# include <stdio.h> // FIZ

void troca(int* p1,int* p2){
    int temp;
    temp=*p2;
    *p2=*p1;
    *p1=temp;
    
    
}


int main (void){
    int* p1,p2;
    int x,y;
    printf("Insira o valor de x:\n");
    scanf("%d",&x);
    printf("Insira o valor de y:\n");
    scanf("%d",&y);
    p1=&x;
    p2=&y;
    
    
    troca(p1,p2); //tinha colocado x e y
    printf("%d %d\n", x, y); //dúvida 
    return 0;
    
    
}



