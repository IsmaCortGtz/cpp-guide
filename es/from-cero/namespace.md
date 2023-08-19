# Espacio de nombres: `namespace`

En los niveles básicos de ***C++*** es comun agregar la linea `using namespace std;` debajo de la importación de librerias. Esto con el proposito de limpiar un poco el codigo y hacerlo más sencillo para los programadores novatos, es importante estar al tanto de esto pues para programas basicos y para la ***OMIJAL*** probablemente no haya problemas en usarlo, pero si necesitamos crear codigo escalable o con muchas dependencias es probable que pueda ser un problema definir el espacio de nombres así.

```cpp
// Utilizando el espacio de nombres
#include <iostream>
using namespace std;

int main(){
  cout << "Hello World!" << endl;
  return 0;
}
```

```cpp
// Sin el espacio de nombres
#include <iostream>

int main(){
  std::cout << "Hello World!" << std::endl;
  return 0;
}
```

El espacio de nombres basicamente nos permite agrupar bajo una categoria o nombre a distintas funciones, variables, constantes, etc. Esto resulta util a la hora de usar numerosas librerias, pues existen muchos casos en los que dos librerias podrian tener funciones con el mismo nombre, utilizando el `namespace` evitamos conflictos.

Pongamos un ejemplo, tengo una libreria llamada `text` que tiene una funcion llamada `suma` que me permite concatenar (juntar) dos textos, y tengo otra libreria llamada `num` que tiene una función llamada tambien `suma`, pero esta me permite sumar dos numeros.

Entonces, si utilizamos la forma corta y mas limpia nos quedaria algo asi:

```cpp
// Con el espacio de nombres
#include <iostream>
#include <text>
#include <num>
using namespace std;
using namespace text;
using namespace num;

int main(){
  int sumaNum;
  string sumaText;

  sumaNum = suma(1, 5);
  sumaText = suma("Hola", " como estas?");
  cout << "El numero es: " << sumaNum << endl;
  cout << "El texto es: " << sumaText << endl;
}
```

Si intentas ejecutar este codigo obtendras un **`error`** por varias razones, la primera es que las librerias `text` y `num` no existen, pero además, en nuestro caso hipotetico establecimos que estas dos librerias tienen funciones iguales, por lo que al usar el `using namespace` estamos creando interferencias. La forma más recomendable de hacerlo seria la siguiente:

```cpp
// Sin el espacio de nombres
#include <iostream>
#include <text>
#include <num>

int main(){
  int sumaNum;
  string sumaText;

  sumaNum = num::suma(1, 5);
  sumaText = text::suma("Hola", " como estas?");
  std::cout << "El numero es: " << sumaNum << std::endl;
  std::cout << "El texto es: " << sumaText << std::endl;
}
```

De esta forma, aunque ambas librerias tengan funciones iguales, al identificarlas con su espacio de nombre correspondiente evitamos errores. Aunque en realidad si pruebas este codigo no funcionaria por si solo dado que dichas librerias no existen, seria necesario crearlas manualmente para poner este ejemplo en acción.

Además, es importante aclarar que esta no es la unica solucón, pues puedes importar en el espacio de nombre solo una de las dos librerias. Incluso no es necesario que la declaracion del `namespace` se haga debajo de las importaciones, puede ponerse dentro de una función o un bloque de codigo de ser necesario, pero en el resto de casos se recomienda ponerlo como se muestra. 



<hr><div align="center"><table><tr>
  <td><b><a href="./basic-syntax.md#sintaxis-básica-"><=  Sintaxis Básica  </a></b></td>
  <td><b><a href="#">  Siguiente  =></a></b></td>
</tr></table></div>