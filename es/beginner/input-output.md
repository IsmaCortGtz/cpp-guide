# Salida y entrada de datos 🖥️ ⌨️

Cuando desarrollamos una app, comúnmente necesitamos mostrarle información al usuario o pedirle algún dato. Y para esto es que se vuelve superimportante la entrada y salida de datos. En **C++** necesitamos la librería `iostream` para poder hacerlo, y para ello usamos las palabras `cout` y `cin` respectivamente.



## Salida de datos

La salida de datos es el primer paso para escribir tu primer programa. Esto básicamente consiste en mostrar información en pantalla al usuario, en este caso lo vamos mediante el uso de `cout` y la librería `iostream`. Mira este ejemplo:

```cpp
std::cout << "Estoy imprimiendo en pantalla :)" << std::endl;
std::cout << "Esto tambien funciona :O";
```

Para imprimir información en pantalla necesitamos usar la palabra `cout`, esta pertenece a la librería estándar de **C++** por lo que utiliza el grupo `std`, podemos evitar usar la forma `std::cout` si agregamos la línea `using namespace std;`, este tema se verá a fondo más adelante.

<details><summary>Ejemplo de código usando <code>using namespace std;</code></summary>

```cpp
#include <iostream>
using namespace std;

int main(){
  cout << "Estoy imprimiendo en pantalla :)" << endl;
  cout << "Esto tambien funciona :O";
  return 0;
}
```

</details>

Después de la palabra `cout` añadimos el ***operador*** `<<`, el tema de los operadores se verá más adelante, por ahora basta con interpretar que esta "flecha" significa mover información hacia la izquierda, en este caso, hacia el `cout`. Y ahora, si, después del operador sigue nuestra información, puede ser texto, números, `bool` y otros tipos de datos, este tema también se verá después.

Podemos encadenar información repitiendo el operador `<<` las veces que sean siempre y cuando la línea termine en `;`, mira este ejemplo:

```cpp
#include <iostream>

int main(){
  std::cout << "Texto en " << "partes, pero se junta porque no agregue el endl. ";
  std::cout << "Estoy imprimiendo en pantalla :). " << "Y esta es información extra." << std::endl;
  return 0;
}
```

Si ejecutas el código anterior te debería de mostrar en pantalla algo así:

```txt
Texto en partes, pero se junta porque no agregue el endl. Estoy imprimiendo en pantalla :). Y esta es información extra.
```

Como puedes ver, a pesar de que en nuestro código usamos dos líneas al ejecutarse se ve todo en una sola. Esto se debe a que no agregamos el salto de línea, este es un carácter que le dice al programa que al momento de *"escribir"* nuestro texto en pantalla debe de continuar en la siguiente línea y no en la misma.

Para solucionar esto tenemos dos opciones, la más *"elegante"* es agregar la palabra `endl` al final, igual que en los ejemplos anteriores. Claro, este valor pertenece a la librería `iostream`, por lo que al igual que con `cout` es posible que necesitemos usarlo como `std::endl`.

Nuestra otra opción es usar una secuencia de escape, estas se verán en un tema más adelante, pero básicamente son *"letras"* que nos permiten cosas como tabular o hacer un salto de línea. En este caso la que corresponde al salto de línea es `\n`, si agregamos estos caracteres al final del texto dentro de las comillas funcionará igual que un `endl`. Mira el ejemplo:

```cpp
#include <iostream>

int main(){
  std::cout << "Esto es igual \n";
  std::cout << "A esto" << std::endl;
  return 0;
}
```

Si ejecutamos deberíamos de ver algo así:

```bash
Esto es igual
A esto
```



## Entrada de datos

La entrada de datos es muy similar a la salida de datos, al igual que esta última, la entrada de datos usa una palabra llamada `cin`, la cual pertenece a la librería `iostream`, y al igual que al imprimir datos, es posible que tengamos que usarlo de la forma `std::cin`.

```cpp
string textVar;
std::cin >> textVar;

int numero;
std::cin >> numero;
```

El ejemplo anterior cuenta con dos casos, en el primero guardamos en una `variable` de texto algo que el usuario introduce, y en la segunda guardamos un número entero en la variable `numero`. El tema de variables y tipos de datos se revisará más adelante.

Es importante saber que `cin` seguirá dándole información a nuestra variable hasta que el usuario use la tecla `Enter`, a menos de que el tipo de dato no permita ese tipo de información, en ese caso podría dar un error.

Para dejar más claro el asunto, este es un ejemplo de un programa que le pide al usuario su nombre y luego lo imprime en pantalla:

```cpp
#include <iostream>

int main(){
  string nombre;

  std::cout << "Cual es tu nombre? ";
  std::cin >> nombre;

  std::cout << "Hola " << nombre << ". (:" << std::endl;
  return 0;
}
```

Resultado:

```txt
Cual es tu nombre? IsmaCortGtz
Hola IsmaCortGtz. (:
```



<hr><div align="center"><table><tr>
  <td><b><a href="./include.md">⬅ Importaciones</a></b></td>
  <td><b><a href="./comments.md">Comentarios ⮕</a></b></td>
</tr></table></div>