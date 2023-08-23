# Ejercicios de práctica 💪

Estos son algunos de los ejercicios básicos que te recomiendo realizar conforme avances en la guía, te servirán para asegurarte de que el conocimiento que vas adquiriendo quede bien claro y puedas llevarlo a la práctica. Cada ejercicio además incluirá mi solución personal, aunque claro, no significa que sea la única forma de hacerlo.



## Ejercicio #1: `Hello World!` 

Este es el ejercicio más básico para cualquier lenguaje de programación, lo que tienes que hacer es escribir un programa que muestre en pantalla lo siguiente:

```bash
Hello World!
```

<details><summary>Mi solución:</summary><br>

Puedes ver el archivo [aquí](../../code/hello-world.cpp).

```cpp
#include <iostream>

int main(){
  std::cout << "Hello World!" << std::endl;
  return 0;
}
```
</details>

<div><table><tr>
  <td><b><a href="./input-output.md">⬅ Salida y entrada de datos</a></b></td>
  <td><b><a href="#ejercicio-1-hello-world">Siguiente ⮕</a></b></td>
</tr></table></div><hr>



## Ejercicio #2: A calcular! 

Este ejercicio es bastante sencillo, debes de realizar un programa que le solicite al usuario dos números enteros y los almacene en dos variables, para después realizar una suma, resta, multiplicación y división a dichos números. Al final imprime esos números en pantalla, puedes hacerlo así:

```bash
Ingresa el numero a: 5
Ingresa el numero b: 2

La suma de a + b = 7
La resta de a - b = 3
La multiplicacion de a * b = 10
La division de a / b = 2.5
```

> Recuerda que una división puede resultar en un número decimal, así que asegúrate de usar el tipo de dato correcto.

<details><summary>Mi solución:</summary><br>

Puedes ver el archivo [aquí](../../code/calculating.cpp).

```cpp
#include <iostream>

int main(){
  double a, b;
  std::cout << "Ingresa el numero a: ";
  std::cin >> a;
  std::cout << "Ingresa el numero b: ";
  std::cin >> b;

  std::cout << "\nLa suma de a + b = " << a + b << std::endl;
  std::cout << "\nLa resta de a - b = " << a - b << std::endl;
  std::cout << "\nLa multiplicacion de a * b = " << a * b << std::endl;
  std::cout << "\nLa division de a / b = " << a / b << std::endl;
  return 0;
}
```
</details>

<div><table><tr>
  <td><b><a href="#ejercicio-2-a-calcular">⬅ Anterior</a></b></td>
  <td><b><a href="#ejercicio-2-a-calcular">Siguiente ⮕</a></b></td>
</tr></table></div><hr>



## Ejercicio #3: Evitando coliciones en el `namespace`

Este es un ejercicio bastante interesante. Para realizarlo primero tienes que hacer un par de cosas, así que sigue estas instrucciones:

1. Crea un archvio para tu codigo, puedes usar la carpeta que quieras.
2. Crea una nueva carpeta junto a este archivo, llama a la carpeta `headers`.
3. Descargar estos dos archivos y colocalos dentro de la carpeta `headers`:
    - [suma.num.h](https://cdn.jsdelivr.net/gh/IsmaCortGtz/cpp-guide/code/headers/suma.num.h)
    - [suma.str.h](https://cdn.jsdelivr.net/gh/IsmaCortGtz/cpp-guide/code/headers/suma.str.h)
4. Agrega las siguientes librerias en tu codigo:

```cpp
#include "headers/suma.num.h"
#include "headers/suma.str.h"
```

Si ejecutas un `Hello World!` con estas librerias añadidas no deberias de tener ningun error, pero de no ser así asegurate que tu estructura de archivos sea la siguiente:

```txt
.
├─ headers/
│  ├─ suma.num.h
│  └─ suma.str.h
└─ codigo.cpp
```

Bien, ahora que tienes todo lo necesario, este es el ejercicio:

Las dos librerias que importamos tienen una función llamada `suma` que aceptan dos parametros. 

La función de la libreria `suma.num` acepta dos numeros enteros, y devuelve la suna de estos numeros. Además su espacio de nombres es la palabra clave `num`.

La función de la libreria `suma.str` acepta dos `string` y devuleve la suma de estos, es decir: `"Hola " + "mundo" = "Hola mundo"`. Además su espacio de nombres es la palabra clave `str`.

Lo que tienes que hacer es ser capas de utilizar ambas funciones de ambas librerias evitando una colición por tener los mismos nombres.

> Recuerda que en la libreria estandar, que tienen un espacio de nombres `std`, las funciones se usan de forma `std::funcion()`.


<details><summary>Mi solución:</summary><br>

Puedes ver el archivo [aquí](../../code/namespace.practice.cpp).

```cpp
#include <iostream>
#include "headers/suma.num.h"
#include "headers/suma.str.h"

int main(){
  std::cout << str::suma("Hola ", "mundo") << std::endl;
  std::cout << num::suma(2, 1) << std::endl;
  return 0;
}
```
</details>

<div><table><tr>
  <td><b><a href="#ejercicio-3-evitando-coliciones-en-el-namespace">⬅ Anterior</a></b></td>
  <td><b><a href="#ejercicio-3-evitando-coliciones-en-el-namespace">Siguiente ⮕</a></b></td>
</tr></table></div><hr>