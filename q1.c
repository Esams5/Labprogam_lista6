#include <stdio.h>
#include <stdlib.h>


struct aluno media(struct aluno alun);

struct aluno{
    float n1;
    float n2;
    float media;
};

int main(){
    struct aluno a;

    puts("Digite a 1 nota: ");
    scanf("%f",&a.n1);

    puts("Digite a 2 nota: ");
    scanf("%f",&a.n2);

    a = media(a);
    printf("Média é %.2f\n",a.media);


    return 0;
}

struct aluno media(struct aluno alun){
    alun.media = (alun.n1 + alun.n2) / 2;
    return alun;
}