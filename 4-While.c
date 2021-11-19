#include<stdio.h>
//ESTRUCTURA WHILE
//ESTRUCTURA REPETITIVA WHILE
//imprimir por pantalla los numeros del 1 al 10
int main(){

    int edadPersona = 18;
    int iterador = 1;
    /*int var1 = 1;
    int var2 = 2;
    int var3 = 3;
    int var4 = 4;
    int var5 = 5;
    int var6 = 6;
    int var7 = 7;
    int var8 = 8;
    int var9 = 9;
    int var10 = 10;*/
    while(iterador <= 10){

        printf("variable iterador : %d\n", iterador);
        //debemos incrementar el valor en 1 de manera explicita ya que el while no lo hace
        //por nosotros
        //iterador++;
        iterador = iterador + 1;
    }
    /*
    printf("%d\n",var1);
    printf("%d\n",var2);
    printf("%d\n",var3);
    printf("%d\n",var4);
    printf("%d\n",var5);
    printf("%d\n",var6);
    printf("%d\n",var7);
    printf("%d\n",var8);
    printf("%d\n",var9);
    printf("%d\n",var10);
    */
}