# Importaciones 📥

Cuando estamos trabajando en crear programas que realizan diversas funciones, se vuelve necesario hacer cada vez más cosas, como leer archivos, obtener datos de internet o incluso saber la hora del dispositivo que se está usando. Para este tipo de tareas normalmente podemos utilizar librerías, que no son más que código que otras personas escribieron y nosotros podemos reutilizar.

Las cosas que podemos encontrar en estas librerías son muchas, desde `funciones` para imprimir algo en la pantalla, hasta guardar texto en un archivo `.txt`.

En ***C++*** la forma para poder importar una librería es mediante la palabra `include` siempre después del signo numeral `#`, y existen muchas librerías que están incluidas en la mayoría de compiladores y otras que podemos descargar desde internet. Una de las más comunes es la librería `iostream`, la cual nos permite la salida y entrada de datos, lo que básicamente significa poder imprimir cosas en la terminal y pedirle al usuario que ponga un valor.

```cpp
#include <iostream>
```

Por dentro lo que la palabra `include` hace es tomar todo lo que la librería tiene y *"copiarlo"* al archivo al momento de compilar, por lo que podría funcionar en cualquier parte. A pesar de esto, es mejor ponerlo **siempre** al principio del código, pues nos permite una mejor organización.



### Comillas `""` y parentesis angulares `<>`

```cpp
#include <iostream>
#include "json.h"
```

Como puedes ver en el ejemplo anterior, existen dos formas de importar una librería, estas tienen como diferencia principalmente el lugar en el que el compilador las va a buscar al momento de ejecutar tu programa. 

Todos los compiladores cuentan con una carpeta llena de librerías básicas, cuando usas los paréntesis angulares `<>` al importar, el compilador solo buscara la librería en dicha carpeta, si no puede encontrarla entonces dará error. En cambio, cuando importas una librería usando comillas `""` el compilador buscara primero la librería en la misma carpeta en la que está tu código, si no la encuentra ahí, entonces buscara en la carpeta de librerías que mencionamos antes, si tampoco se encuentra ahí entonces dará un error.



<hr><div align="center"><table><tr>
  <td><b><a href="./README.md">⬅ Desde 0</a></b></td>
  <td><b><a href="./input-output.md">Salida y entrada de datos ⮕</a></b></td>
</tr></table></div>