#include <stdio.h>
#include <string.h>

struct estoque{
    char nomePeca[15];
    int num_peca;
    float val;
    int num_pedido;
};

int main(){
    struct estoque e;
    strcpy(e.nomePeca,"Engrenagem");
    e.num_peca = 123;
    e.val = 20.54;
    e.num_pedido = 111;

    return 0;
}
