# Sintaxis Básica 📗

Este es un ejemplo de un ***Hello World*** básico en **C++**, un ***Hello World*** es un programa básico que se usa comúnmente para realizar funciones básicas de un lenguaje de programación, normalmente imprimir dicha frase en pantalla.

```cpp
#include <iostream>

int main(){
  std::cout << "Hello World!" << std::endl;
  return 0;
}
```

## Tabla de Contenidos 🔍

- [Sintaxis Básica](#sintaxis-básica-📗)
  - [Importaciones](#importaciones)
  - [Función `main`](#función-main)
  - [Entrada y Salida de datos](#entrada-y-salida-de-datos)
  - [Creando tu propio `Hello World!`](#creando-tu-propio-hello-world-👋)



### Importaciones

Analicemos este código parte por parte, primero tenemos la primera línea la cual nos sirve para importar librerías, en este caso la librería que importamos es `iostream` la cual incluye funciones básicas para trabajar con entradas y salidas de texto principalmente.

```cpp
#include <iostream>
```



### Función `main`

Esta parte del código incluye la función `main`, más adelante trabajaremos más a detalle con la creación de funciones, por ahora basta con tener en cuenta que esta función es donde debemos de poner todo nuestro código para nuestra aplicación entre las llaves `{}`, desde crear variables, sumas, imprimir en pantalla, etc. Existen una serie de cosas que se pueden establecer fuera de la función `main` como constantes u otras funciones.

La función `main` debe de ser de tipo `int` (es decir, un número entero, más adelante revisaremos los tipos de datos), por lo que se debe de agregar al final de esta la línea `return 0;` (esta línea se explicara más adelante junto a las funciones).

Para hacer el codigo más legible se acostumbra dejar un espacio al princio de cada linea dentro de una función, el espacio que decidas usar depende de ti siempre y cuando uses siempre el mismo, personalmente te recomiendo usar 2 o 4 espacios en blanco usando la tecla `Espacio`. Esta separación puede aumentar si agregas más bloques de codigo dentro de la función, este punto se revisara más adelante.

```cpp
int main(){
  std::cout << "Hello World!" << std::endl;
  return 0;
}
```



### Entrada y Salida de datos

```cpp
std::cout << "Hello World!" << std::endl;
```

La última línea que necesita explicación es esta, la cual nos permite mostrar en pantalla algún tipo de dato, a esta acción se le conoce como `salida de datos`. Por lo tanto, es fácil deducir que a la acción contraria, es decir, introducir datos al programa, se le conoce como `entrada de datos`.

En el caso de la salida de datos se utiliza la palabra reservada `cout`, puede que sea necesario utilizarlo de la forma `std::cout` dependiendo de como estemos manejando el `espacio de nombre`, puedes saber sobre esto en la sección [***Espacio de nombres: `namespace`***](#espacio-de-nombres-namespace).

Y para el caso de la entrada de datos usamos la palabra reservada `cin`, al igual que para la salida de datos, es posible que necesitemos usar la forma `std::cin`.

Estas dos palabras reservadas están definidas en la librería `iostream`, por lo que será necesario importarla para usarlas. Para utilizarlas tenemos que usar el operador `<<` y `>>` que representan un flujo de bits, habláramos más al respecto de los operadores más adelante. Estos operadores se utilizan en un nivel algo avanzado de ***C++***, por lo que no es necesario que entiendas como funcionan por dentro, por ahora basta con imaginar que son una flecha que indica hacia donde se mueve la información.

Por ejemplo, para la salida de datos tenemos la palabra `cout` que por ahora podemos entenderla como la información que se muestra en la pantalla, después tenemos el operador `<<` que nos indica que la información se mueve de la derecha a izquierda, y a la derecha de este operador tenemos nuestra información a imprimir, en este caso es un `string` (tipo de dato) que dice `Hello World!`, después tenemos de nuevo el operador `<<` y la palabra reservada `endl`, esto básicamente significa que después de nuestra información agregaremos un carácter que hará un salto de línea en la pantalla, por lo que la próxima vez que usemos el `cout` este se mostrará en un renglón distinto.

Y por último todas las líneas en ***C++*** necesitan terminar con un `;`, de lo contrario el compilador dará un error.

```cpp
cout << "Hello World!" << endl;
cout << 'l' << endl;
cout << true << endl;
cout << 5 << endl;
cout << 3.141516 << endl;
```

La entrada de datos es bastante similar, en primer lugar tenemos la palabra `cin` la cual es el origen de nuestra información, después el operador `>>` que indica que nuestra información se moverá hacia la derecha, después estará nuestra `variable` (el concepto de variables se verá más adelante), y por último nuestro `;`, la información terminará después de que presionemos la tecla `Enter` en nuestro teclado.

```cpp
int numeroDeVueltas;
cin >> numeroDeVueltas;
```



## Creando tu propio `Hello World!` 👋

Utilizando toda la información anterior crea un programa sencillo que muestre la frase `Hello World!`.

*Es recomendable usar solo caracteres que se encuentren en el idioma inglés para evitar problemas, evita los acentos y las `ñ` al momento de imprimir texto en pantalla.*

```bash
# Ejemplo de como debe de verse nuestro programa al ejecutarse
Hello World!
```

Puedes ver mi solución al problema y ejecutarla tu mismo [aquí](../../code/hello-world.cpp).



<hr><div align="center"><table><tr>
  <td><b><a href="./README.md#desde-0-🔰"><=  Desde 0  </a></b></td>
  <td><b><a href="./namespace.md">  Espacio de nombres: namespace  =></a></b></td>
</tr></table></div>