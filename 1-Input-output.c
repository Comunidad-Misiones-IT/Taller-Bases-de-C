#include<stdio.h>

int main(){
    printf("Hola a todos\n"); //Hola a todos\n
    const int valorConstante = 200;
    const float impuesto = 30.00;






    //valorConstante = 400;    
    //int, char, float

    //datos de la persona Luis
    int edad = 20;
    char inicialPersona = 'L';
    float altura = 180.2;
    
    int Int = 21;

    //cuantos años tiene Luis??
    printf("Edad de Luis : %d\n",edad);
    printf("Inicial de la persona : %c\n",inicialPersona);
    printf("Altura de Luis : %f\n",altura);

    //ingreso por teclado   
    printf("Ingrese la edad de la persona: ");
    scanf("%d",&edad);
    printf("Edad de de la otra persona : %d\n",edad);
}