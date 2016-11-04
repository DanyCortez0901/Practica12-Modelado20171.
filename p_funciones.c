#include <stdio.h>

/*Funciónes que reciben un apuntador a función que recibe un entero y devuelve un entero, y
como segundo parametro recibe un entero, regresan un entero.*/
int misterio1(int (*fun) (int), int);
void misterio2(void (*fun) (int), int);
//Función que recibe y regresa un entero.
int cuadrado_num(int);
//Función que no regresa nada y recibe un entero.
void imprime_num(int);
//main del programa
int main()
{
	//Se declaran dos apuntadores a funciones, el primero recibe y regresa un int, el segundo no regresa nada y recive un int
  int (*fun1) (int);
  void (*fun2) (int);

  //Los apuntadores ahora van a apuntar a las funciones descritas
  fun1 = &cuadrado_num;
  fun2 = &imprime_num;
  int var = misterio1(fun1, 3); //inicializamos un entero con el valor que regresa misterio mandado a llamar con fun1 y el entero 3
  misterio2(fun2, var); //finalmente mandamos a llamar misterio dos con fun2 y la variable antes descrita
}

//solamente ejecuta la funcion del primer parametro con el entero del segundo parametro
int misterio1(int (*fun) (int), int num)
{
    return fun(num);
}

//de igual forma solo ejecuta la funcion que le pasan con parametro el segundo parametro de misterio2
void misterio2(void (*fun) (int), int num)
{
    fun(num);
}

//calcula le cuadrado del numero que se pasa como parametro
int cuadrado_num(int num)
{
    return num * num; //multiplica el numero por si mismo
}

//imprime el numero que recive como parametro
void imprime_num(int num)
{
    printf("Tada: %d\n", num);
}
