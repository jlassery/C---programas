
# include <stdio.h>




int main (void){


    char nota[3];


    int cont=0,i;


    float media=0,soma=0;







    for(i=0;i<3;i++){


        printf("Entre com a nota:\n");


        scanf("%hhd",&nota[i]);


        soma+=nota[i];    


    }


    media=(soma/3);


    printf("A media é:%f\n",media);


    for(i=0;i<3;i++){


        if(nota[i]>media){


            cont+=1;


        }


    }


    printf("Notas acima da media:%d\n",cont);


    return 0;


}



