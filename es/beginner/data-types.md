# Tipos de datos 📚

Este es otro de los temas fundamentales en programación. A pesar de que cada lenguaje de programación tiene pequeñas diferencias en este tipo de cosas, en general es muy similar. Sin embargo, obviamente nosotros nos enfocaremos en ***C++***.



## Números enteros

Este es uno de los tipos de datos más comunes y representa los números enteros. Este tipo de dato puede guardar números negativos y positivos, pero no decimales. Tiene un rango de números límite, el cual es `-2147483648` a `2147483647`. Este rango se puede agrandar un par de veces según la necesidad, pero esto es algo un poco más avanzado que veremos después.

Su palabra reservada es `int`.

```cpp
int numero1 = 3456;
int numero2 = -345898;
int numero3 = 0;
```



## Carácter

Este tipo de dato nos sirve para almacenar caracteres, es decir letras, números y símbolos. 

Pero cuenta con un par de limitaciones, la primera es que solo puede guardar caracteres `ANSI`, además este tipo de dato solo puede almacenar un carácter, por lo que si quieres guardar una palabra o frase entera tendrás que recurrir al tipo de dato `string` o a un `arreglo` (veremos ese tema después).

Este tipo de dato tiene un tamaño de `8 bits`, es decir, `1 byte`. Pero existen variaciones que aumentan este tamaño, permitiéndonos usar caracteres que no se pueden almacenar solo en `1 byte`, aunque estas variaciones pueden traer problemas y, en general, no están estandarizadas, por lo que es diferente en cada plataforma.

Su palabra reservada es `char`. Además, para representar que nuestro texto es de tipo `char` tenemos que usar comillas simples `'` y no comillas dobles `"`.

```cpp
char separador = ',';
char suma = '+';
```



## Cadenas de texto `string`

Este tipo de dato también es bastante común, aunque también es bastante resiente, pues hasta hace unos años no existía. Este nos sirve para poder guardar texto. Tiene una limitación y es que solo puede almacenar caracteres `ANSI`, pues por dentro funciona con el tipo de dato `char` (Hablaremos más de esto después).

Es posible utilizar [`UNICODE`](https://home.unicode.org/) utilizando el tipo `wstring`, pero para esto será necesario importar la librería `string` que se encuentra en la librería estándar de `C++`. Además de que este tipo de dato fuera de Windows puede traer problemas dependiendo del compilador.

Su palabra reservada es `string` y `wstring` para la versión de carácter ancho. Además, para representar que nuestro texto es de tipo `string` o `wstring` tenemos que usar comillas dobles `"` y no comillas simples `'`.

```cpp
std::string nombre = "Armando Mesa";
std::wstring emoticon = "(◕‿◕)"; // Necesita de #include <string>
```



## Coma flotante

Este tipo de dato es otro bastante útil, pues nos sirve para guardar números decimales tanto negativos como positivos. Internamente, este tipo de dato almacena estos datos mediante notación científica, por lo que su precisión podría no ser la mejor. 

Su palabra reservada es `float` y solo puede almacenar 7 decimales.

Además, su uso se puede volver algo raro, pues si quieres almacenar un número sin decimales, pero que el compilador lo use como un float para, por ejemplo, usarlo para divisiones, entonces necesitas agregar el carácter `f` después del número, pues si no se agrega este sería un tipo `double`, aunque casi siempre el compilador convierte el dato automáticamente.

```cpp
float a = 5.0f;
float b = 2.0f;
float c = a / b; // 2.5
```



## Doble coma flotante

Este tipo de dato es casi igual al de tipo `float`, con la diferencia de que este tiene el doble de espacio en memoria, lo que se traduce en más decimales y más precisión. Este tipo de dato concretamente puede almacenar hasta 12 decimales.

Su palabra reservada es `double`, y a diferencia del `float` este no necesita ningún carácter después de su asignación.

```cpp
double a = 5.0;
double b = 2.0;
double c = a / b; // 2.5
```



## Booleano

Este es otro de los tipos de datos muy típicos en programación, pues son muy comunes para comparar cosas.

Este tipo de dato solo puede almacenar dos valores diferentes: `true` y `false`, es decir, `verdadero` y `falso`.

A primera vista podría no parecer muy útil, pero más adelante verás que se vuelven indispensables en la comparación de datos y el uso de bucles, lo que los vuelve demasiado útiles.

A pesar de que este es un tipo de dato diferente, internamente se maneja como un dato `int`, usando el `1` para `true` y el `0` para `false`.

Su palabra reservada es `bool`.

```cpp
bool esLunes = true;
bool esJueves = false;
```



## `Void`

Este tipo de dato es bastante particular, pero útil al momento de crear funciones (tema que tocaremos más adelante).

Lo que lo hace tan especial es que no se puede utilizar para declarar variables, y de hecho en ***C++*** solo tiene un único propósito, y es el de las funciones.

Adelantándonos un poco, una función es una pieza de código que podemos ejecutar muchas veces enviando cierta información que puede cambiar, esto nos permite no tener que repetir código. Pues bien, una función puede devolver información, imagínalo como el resultado de una operación. Es por esto que cuando creas una función debes de declararle un tipo de dato al igual que a una variable.

Pues bien, este es el propósito de `void`, declarar una variable que *`NO`* devuelve ningún valor. Su palabra reservada es esa misma, `void`:

```cpp
#include <iostream>

void imprimir(std::string mensaje){
  std::cout << mensaje << std::endl;
}

int main(){
  imprimir("Hola mundo!");
  return 0;
}
```

Resultado:

```text
Hola mundo!
```



<hr><div align="center"><table><tr>
  <td><b><a href="./variables.md">⬅ Variables</a></b></td>
  <td><b><a href="./practice.md#ejercicio-1-hello-world">Ejercicio #1: Hello World ⮕</a></b></td>
</tr></table></div>