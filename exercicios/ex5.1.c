# include <stdio.h>

int main (void){

    int a,b;
    int* p;
    printf("Insira o valor de a:");
    scanf("%d",&a);
    printf("Insira o valor de b:");
    scanf("%d",&b);
    
    printf("%d\n",a);
    printf("%d\n",b);
    if(a>b){
        p=&a;
        *p=*p-50;
    }else{
        p=&b;
        *p=*p-50;  // *p já indica automaticamente o valor de a e b
    }
    printf("%d,%d",a,b);


}

