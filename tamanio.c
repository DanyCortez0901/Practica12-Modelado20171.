//la libreria estandar blablabla ed entrada-salida
#include <stdio.h>

// Main del programa
int main() {
  //imprimimos el tamaño de una variabletipo float.
  printf("El tipo float tiene un tamaño en byts de: %li \n", sizeof(float));
  //imprimimos el tamaño de una variable del tipo double.
  printf("El tipo double tiene un tamaño en byts de: %li \n", sizeof(double));
  //imprimimos el tamaño de una variable tipo short.
  printf("El tipo short tiene un tamaño en byts de: %li \n", sizeof(short));
  //imprimimos el tamaño de una variable tipo int.
  printf("El tipo int tiene un tamaño en byts de: %li \n", sizeof(int));
  //imprimimos el tamaño de una variable tipo unsigned int.
  printf("El tipo unsigned int tiene un tamaño en byts de: %li \n", sizeof(unsigned int));
  //imprimimos el tamaño de una variableapuntador a int.
  printf("El tipo apuntador a int tiene un tamaño en byts de: %li \n", sizeof(int*));
  //imprimimos el tamaño de una variable tipo char.
  printf("El tipo char tiene un tamaño en byts de: %li \n", sizeof(char));

  // se necesita regresar algo
  return 0;
}
