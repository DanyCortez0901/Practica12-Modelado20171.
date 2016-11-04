
#include <stdio.h> //libreria estandar de lectura y escritura
// si queremos antes el main necesitamos decir que funciones vamos a tener
void swap(int *a, int *b);
//lo que se ejecutara
int main(){
  //se inicializan los valores
  int  valor1 = 1;
  int  valor2 = 2;
  // mostramos los valores antes del swap
  printf("primer valor = %d, segundo valor = %d\n", valor1, valor2);
  // hacemos el swap
  swap(&valor1, &valor2);
  // mostramos lo ocurrido despues del swap
  printf("Despues del swap los valores quedan de esta forma: primer valor = %d, segundo valor = %d\n", valor1, valor2);

  // se tiene que regresar algo
  return 0;
}

//recibimos dos apuntadores que son los valores a intercambiar

void swap(int *a, int *b){
  // variable auxiliar para no perder el valor de a
  int c = *a;
  //cambiamos el valor de a por el de b
  *a = *b;
  // cambiamos el valor de b por el original de a
  *b = c;
}
