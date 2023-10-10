# Funciones ♻️

Las funciones son otra parte fundamental de la programación en lenguajes como ***C++*** y pueden hacer la diferencia totalmente entre dos códigos que hagan exactamente lo mismo, pero con una diferencia de longitud del doble.

## Definición

Personalmente me encanta explicar una función como un pedazo de código que podemos repetir las veces que queramos para ahorra código, como si estuviéramos creando una formula.

Pero claro, esta no es la forma más correcta de definir a una función. Si queremos ser precisos podemos decir que una función es un `bloque de código` al que le asignamos un nombre para poder reutilizarlo las veces que sea necesario.

## Bloques de código

Antes de continuar es importante entender este concepto. Básicamente un bloque de código es todo aquel código que se encuentre entre llaves `{}`. Mira este ejemplo

```cpp
int main() {
  
  int numeroA = 1;

  { // Se abre un bloque de código
    int numeroB = 2;
    std::cout << numeroA << std::endl; // Funciona: imprime 1
    std::cout << numeroB << std::endl; // Funciona: imprime 2
  } // Se cierra el bloque de código

  std::cout << numeroA << std::endl; // Funciona: imprime 1
  std::cout << numeroB << std::endl; // No funciona: da error
  
  return 0;
}
```

Como puedes ver en el ejemplo anterior, la variable `numeroB` se encuentra dentro de un bloque de código, por lo que solo se puede usar dentro de ese bloque. En cambio, la variable `numeroA` esta declarada dentro del bloque de código de la función `main`, por lo que puede usarse en cualquier parte dentro de la función.

En el ejemplo anterior del bloque de código en el que declaramos `numeroB` no sirve para nada, pero los bloques de código se volverán importantes al momento de trabajar con funciones, condicionales, bucles, etc.

## Sintaxis de una función

Una función cuenta con cuatro partes principales, veamos este ejemplo:

```cpp
int suma(int a, int b) {
  return a + b;
}
```

### Tipo de dato

El primer punto a destacar es el `int` que esta antes del nombre de la función, y se utiliza para indicar el tipo de dato que la función va a devolver. Para que esto quede más claro repitamos el ejemplo anterior pero con un código completo.

```cpp
#include <iostream>

int suma(int a, int b) {
  return a + b;
}

int main() {
  int resultado = suma(5, 2); // 7
  std::cout << resultado << std::endl;
  return 0;
}
```

Como puedes ver, al momento de declarar la variable `resultado` le estoy diciendo que su valor sera lo que sea que me de la función `suma`, a eso es a lo que nos referimos con el tipo de dato que devuelve la función, pues también podría devolver un `double`, un `bool` o incluso texto con un `string`.

Pero hay casos en los que no necesitamos que nuestra función devuelva ningún valor, en ese caso podemos usar la palabra `void`, lo que quedaría algo así:

```cpp
void saludar(string mensaje) {
  std::cout << mensaje << std::endl;
}
```

### Nombre de la función

El segundo punto, uno bastante fácil de entender, es es el nombre de la función. Esto básicamente es la palabra que vamos a utilizar para "llamar" a la función (es decir, ejecutarla). Y digo palabra porque esta parte no puede contener espacios, en su lugar podemos alternar mayúsculas o usar guiones bajos: `nombre_funcion` o `nombreFuncion`.

### Argumentos

Este tercer punto es probablemente el que hace tan poderosas a las funciones, los argumentos. Podemos entender a los argumentos como variables que podemos utilizar dentro de una función y además podemos darle un valor a esta variable para cada ocasión que utilicemos la función. Sera más fácil de entender si vemos de nuevo el ejemplo:

```cpp
int suma(int a, int b) {
  return a + b;
}
```

En este caso la función `suma` tiene dos argumentos, uno `a` y otro `b`. Al momento de crear la función nosotros no le damos ningún valor a estas variables, sino que se lo daremos cada vez que ejecutemos la función, miremos un ejemplo más:

```cpp
int suma(int a, int b) {
  return a + b;
}

int main() {
  suma(5, 7); // aquí a vale 5 y b vale 7
  suma(8, 1); // aquí a vale 8 y b vale 1
}
```

Como puedes ver, estamos ejecutando la función dos veces, pero le estamos pasando argumentos diferentes, por lo que cuando el programa ejecute la función las variables `a` y `b` tendrán valores diferentes así que el resultado sera diferente.

### El `return`

Como mencione el e primer punto, una de las características más importantes de una función es el poder devolver un resultado, pero la función no devolverá ningún valor si nosotros no se lo decimos, para eso esta la palabra `return`.

Cuando usamos la palabra `return` le decimos a la función que tiene que devolver ese valor cuando se ejecute la función, por ejemplo, si ponemos `return a` la función devolverá el valor de la variable a, claro, si la variable no existe o esta en oto bloque de código entonces no podremos acceder a ella, en ese caso tendríamos que pasar la variable como argumento.

```cpp
int numero() {
  return 5 + 3;
}
```

El ejemplo anterior muestra un uso de la palabra `return`, cada que ejecutemos la función `numero` esta siempre devolverá un `8` porque no estamos utilizando ninguna variable.

```cpp
int suma(int a, int b) {
  return a + b;
}

int main() {
  suma(5, 7); // Devuelve 12
  suma(8, 1); // Devuelve 9
}
```

En este ejemplo de nuevo, la función `suma` devuelve el resultado de sumar los argumentos `a` y `b`, por lo que el resultado es diferente cada vez que se usa. 

Aunque claro, este es un ejemplo bastante simple, entonces mira esta otra función que calcula el área de un circulo:

```cpp
double areaCirculo(double radio) {
  double PI = 3.141592; // C++ tiene librerías de matemáticas que ya contienen PI, este es solo un ejemplo.
  double resultado = PI * (radio * radio);
  return resultado;
}
```

Este nuevo ejemplo es un poco más largo aunque aun bastante sencillo, podemos ver que la función `areaCirculo` solo necesita que le demos el radio y automáticamente nos devolverá el resultado del área del circulo.

Y esta es la cosa más sencilla que puedes hacer con funciones, puedes implementar cualquier formula que desees e incluso hacer cosas mas complejas con recursividad, aunque eso es un tema para después.

Por ahora es importante tener bien presente como utilizar funciones y familiarizarte poco a poco con ellas, así lograras dominarlas y te sera mucho más fácil resolver ejercicios que antes podrían parecerte super complicados.



## Recordatorio

Recuerda que el objetivo de las funciones es poder reutilizar código, asi que si estas resolviendo un problema y notas que repites mucho código intenta dividirlo en funciones.



<hr><div align="center"><table><tr>
  <td><b><a href="./data-types.md">⬅ Tipos de datos</a></b></td>
  <td><b><a href="./practice.md#ejercicio-1-hello-world">Ejercicio #1 ⮕</a></b></td>
</tr></table></div>