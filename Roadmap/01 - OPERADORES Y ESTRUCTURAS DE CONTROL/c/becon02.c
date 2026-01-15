#include <stdio.h>

void operadores();
void condicionales();
void iterativas();
void desafio();

int main(void)
{
    operadores();
    condicionales();
    iterativas();
    desafio();

    return(0);
}

/* OPERADORES
Este programa (código) demuestra los operadores más comunes en C, clasificados en:
- Aritméticos: para realizar cálculos matemáticos
- Comparación: para comparar valores y generar resultados booleanos
- Lógicos: para realizar operaciones con condiciones (AND, OR, NOT)
- Asignación: para modificar el valor de una variable
- Bits: para trabajar con operaciones a nivel de bits (AND, OR, desplazamientos) 
*/
void operadores()
{
    int a = 5;
    int b = 10; //Variables globales de la function

    //Operadores Aritmeticos
    printf("--- Operadores Aritmeticos ---\n");
    {
        printf("Suma: %d + %d = %d", a, b, a + b);
    }
}

void condicionales()
{

}

void iterativas()
{

}

void desafio()
{

}