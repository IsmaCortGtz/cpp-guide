# Variables 📦

Uno de los conceptos más importantes en la programación son las `variables`, y obviamente **C++** no es la excepción.

La forma en la que comúnmente me gusta explicar este término a personas nuevas es como una ***caja***. Imagina que tienes información que puede cambiar constantemente en tu programa, pero la forma de usarla es siempre la misma, pues en ese caso las variables son el punto clave.

Entonces, imagina que tienes una caja donde puedes guardar, por ejemplo, números. Entonces llamas a tu ***"caja"*** como `numero` y guardas en ella un 5. Pues si quieres por ejemplo multiplicar el número que tengas en esa caja solo necesitaras usar su nombre y cuando ejecutes tu programa el mismo revisará que valor hay en esa caja y lo tomará, claro, también puedes cambiar el valor después.

Mira este ejemplo:

```cpp
int numero = 5; // Creamos una caja de tipo numero y le ponemo un 5
std::cout << numero * 2 << std::endl; // Esto mostrara 10

numero = 6; // Cambiamos el valor que hay en numero a 6
std::cout << numero * 2 << std::endl; // El mismo codigo, pero ahora muestra 12
```

Entonces, después de crear nuestra caja podemos ver que para usarla solo basta con poner su nombre y esto será casi como si estuviéramos usando el valor que tiene dentro. Además de que podemos cambiar el valor que hay dentro de la caja, incluso podemos hacer operaciones con ella y guardarla en otra caja.

Esto puede ser útil para crear programas como calculadoras o poder realizar automáticamente fórmulas matemáticas *(esto te puede ayudar a, por ejemplo, en tu clase de matemáticas hacer un programa que resuelva automáticamente una fórmula general, ahorrándote tiempo)*

Mira este ejemplo de la forma más básica para declarar (crear) una variable:

```cpp
int numero1 = 5;
int numero2;
```

El primer paso es definir el tipo de datos que vamos a guardar en nuestra variable, existen muchos como números o textos (Tema a revisar después) y cada uno utiliza una palabra distinta. Para este ejemplo usaremos números enteros, los cuales usan la palabra reservada `int`.

Entonces, escribimos la `palabra reservada` para nuestro tipo de dato, y después tendremos que poner el nombre de nuestra `variable`, es importante que este nombre sea único, por lo que no podemos llamarla igual que una `función` (tema para después), otra `variable` o `constante` (igual, tema para más tarde), de lo contrario tendremos un error.

Además, hay varias formas de crear una `variable`, mira el ejemplo:

```cpp
// Ponerle un valor a la variable desde que se crea.
int numero1 = 3;
int numero2 = 4, numero3 = 10; // Crear varias variables en una misma linea, separadas por coma.

// No asiganr un valor a la variabla creada.
int numero4;
int numero5, numero6; // Tambien podemos crear varias separando por coma.
```

Como puedes ver estas son basicamente las formas más comunes para declarar (crear) variables. Retomando el ejemplo anterior a este, podemos darle un valor a nuestra variable desde el momento en el que la creamos o hacerlo despues. Pero si intentas usar tu variable sin darle un valor primero podrias tener un error, asi que asegurate de hacerlo despues.

En el caso de que tratemos de usar una variable sin darle un valor podrian pasar dos cosas, la primera es obtener un error y no poder ejecutar nuestro programa. Y la segunda es obtener cualquier valor que se encuentre en ese espacio de memoria. El tema del espacio de memoria es algo más avanzado, por ahora no te sera necesario aprenderlo.

Además, podemos crear varias variables en una sola linea separando sus nombres por comas, esto puede ser util en algunos casos pero ten cuidado pues hace más dificil la lectura del codigo.



<hr><div align="center"><table><tr>
  <td><b><a href="./comments.md">⬅ Comentarios</a></b></td>
  <td><b><a href="./data-types.md">Tipos de datos ⮕</a></b></td>
</tr></table></div>