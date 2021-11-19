#include<stdio.h>
//ESTRUCTURA IF
/*
   2 problema : calcular el promedio de edad de 3 personas, si el numero es mayor a 18
   permitirle el ingreso, sino no hacer nada
*/

int main(){
    
    int edad1 = 18;
    int edad2 = 25;
    int edad3 = 33;
    int cantidad = 3;
    float promedioEdad = 0.0;
    int totalEdades = edad1 + edad2 + edad3;
    promedioEdad = totalEdades / cantidad;

    if(promedioEdad > 18){
        printf("Bienvenido");    
    }


}