#include <stdio.h>

#define TAM 3

struct Aluno{
    float n1;
    float n2;
    float media;
};

struct Aluno calcMedia2(struct Aluno);

int main(){

    struct Aluno als[TAM];

    // Entrada de Dados
    for (int k=0; k<TAM; k++){
        printf("Digite a primeira e a 2 nota do aluno %d\n: ",k+1);
        scanf("%f",&als[k].n1);
        scanf("%f",&als[k].n2);
    }

    // Processamento
    for (int k=0; k<TAM; k++){
        als[k] = calcMedia2(als[k]);
    }
    
    // Saída
    for (int k=0; k<TAM; k++){
        printf("Média do aluno %d: %.2f\n",k+1, als[k].media);
    }

    return 0;

}

struct Aluno calcMedia2(struct Aluno a){
    a.media = (a.n1 + a.n2) / 2;

    return a;

}
