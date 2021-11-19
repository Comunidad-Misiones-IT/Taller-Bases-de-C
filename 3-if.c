#include<stdio.h>
//ESTRUCTURA IF
/*
   1 problema : Ingrese su edad por teclado y el programa le dirá si es mayor de edad

   2 problema : calcular el promedio de edad de 3 personas
*/

int main(){

    int edadPersona = 0;
    float altura = 0.0;
    char inicialPersona = "";
    int mayoriaDeEdad = 18;
    printf("Ingrese su edad:");
    scanf("%d",&edadPersona);

    printf("La edad de la persona es: %d años\n",edadPersona);

    if(edadPersona >= 30){

        printf("la persona tiene mas de 30 años\n");    
    }else if(edadPersona >= 18){
            printf("la persona tiene mas de 18 años y menos de 30\n");    
    }else{
        printf("La persona es menor de edad");
    }

    printf("Fin del progrma");
}