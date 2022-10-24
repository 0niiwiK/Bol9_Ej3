// Prototipos
int pideNumero();
void escribirTablaMultiplicar(int num);
void imprimeOperacion(int num, int pos);

#include <stdio.h>

int main() {
    escribirTablaMultiplicar(pideNumero());
    return 0;
}

void escribirTablaMultiplicar(int num){
    for (int i = 1; i <= 10; i++) {
        imprimeOperacion(num,i);
    }
}

void imprimeOperacion(int num, int pos){
    printf("%d x %d = %d\n",num,pos,num*pos);
}

int pideNumero(){
    int num;
    printf("Escribe un numero: ");
    scanf("%d",&num);
    fflush(stdin);
    return num;
}
