#include <stdio.h>
#include <stdlib.h>

int main()
{
    int escolha_1=0;

    int numero1,numero2;

    int roubo = 0;

    int acusacao = 0;

    int soma = 0;
    numero1 = numero2 = 0;


    scanf("%d %d %d %d %d",&escolha_1,&numero1,&numero2,&roubo,&acusacao);

     soma = numero1 + numero2;

     if(soma%2==0)
     {
         if(escolha_1==1)
         {
             if(roubo==0 && acusacao==0)
                printf("Jogador 1 ganha!\n");
             else
                 if(roubo==1 && acusacao==0)
                    printf("Jogador 1 ganha!\n");
                 else
                    if(roubo==1 && acusacao==1)
                        printf("Jogador 2 ganha!\n");
                    else
                        if(roubo==0 && acusacao==1)
                            printf("Jogador 1 ganha!\n");
         }
         else
         {
             if(roubo==0 && acusacao==0)
                printf("Jogador 2 ganha!\n");
             else
                 if(roubo==1 && acusacao==0)
                    printf("Jogador 1 ganha!\n");
                 else
                    if(roubo==1 && acusacao==1)
                        printf("Jogador 2 ganha!\n");
                    else
                        if(roubo==0 && acusacao==1)
                            printf("Jogador 1 ganha!\n");
         }
     }
     else
     {
         if(escolha_1==0)
         {
             if(roubo==0 && acusacao==0)
                printf("Jogador 1 ganha!\n");
             else
                 if(roubo==1 && acusacao==0)
                    printf("Jogador 1 ganha!\n");
                 else
                    if(roubo==1 && acusacao==1)
                        printf("Jogador 2 ganha!\n");
                    else
                        if(roubo==0 && acusacao==1)
                            printf("Jogador 1 ganha!\n");
         }
         else
         {
              if(roubo==0 && acusacao==0)
                printf("Jogador 2 ganha!\n");
             else
                 if(roubo==1 && acusacao==0)
                    printf("Jogador 1 ganha!\n");
                 else
                    if(roubo==1 && acusacao==1)
                        printf("Jogador 2 ganha!\n");
                    else
                        if(roubo==0 && acusacao==1)
                            printf("Jogador 1 ganha!\n");
         }
     }
    return 0;
}
