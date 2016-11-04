
//libreria estandar entrada salida
#include <stdio.h>

void bubbleSort(int *array, int l){
    //iteramos sobre todo el arreglo
	  for(int i = 0; i < l -1; i++){
      //otra vez sobre todo el arreglo
      for(int j = 0; j < l-i-1; j++){
        // dependiendo cual sea el elementomas grande los intercambiamos o los dejamos asi
        if(array[j+1] < array[j]){
           //mismo metodo de swap que en el ejercicio de esta misma practica
           int aux = array[j+1];
           array[j+1] = array[j];
           array[j] = aux;
			}
		}
	}
}
// Función principal.
int main() {
  //arreglo predefinido
  int prueba[] = {1, 4, 5, 3, 2, 8, 5, 2};
  //asi sabemos que  longitud tene el arreglo, como es pre definido sabemos que es 8 pero esto se ve mas fancy
  int l = sizeof(prueba)/sizeof(prueba[0]);
  //imprimimos el arreglo sin ordenar
  for (int i = 0; i < l; i++)
    printf("%d ", prueba[i]);
  printf("\n");
  bubbleSort(prueba, l);
  //la unica forma de imprimir un arreglo es a "pata"
  for (int i = 0; i < l; i++)
    printf("%d ", prueba[i]);
  printf("\n");
  //tenemos que regresar algo
  return 0;
}
