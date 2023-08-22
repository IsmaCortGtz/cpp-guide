# Comentarios 💬

Los comentarios son parte fundamental a la hora de programar, pues nos pueden ayudar a explicar nuestro código y hacer más fácil para nosotros y otras personas entenderlo después.

Para explicarlo fácil podemos decir que un comentario es un pedazo de texto que podemos agregar a nuestro código de forma que el compilador lo ignore para evitar que lo intente leer como código y no generar problemas de sintaxis. 

```cpp
// Y el compilador ignora esto
#include <iostream>

int main(){

  // std::cout << "Esto no se ejecuta" << std::endl;

  std::cout << "Esto se ejecuta en c++" << std::endl;
  return 0;

  /* 
    Y esto tambien lo ignora, es
    un comentario de varias lineas.

    int b = 5
    std::cout << b * 2 << std::endl;
  */

}
```

Resultado:

```bash
Esto se ejecuta en c++
```

Como puedes ver en el ejemplo, puedes poner comentarios en cualquier parte y básicamente existen dos tipos de comentarios.

El primero son los comentarios de una sola línea, los cuales deben de tener al comienzo los caracteres 
`//`, todo lo que este después de eso en esa misma línea se tomara como comentario, por lo que no se ejecutara.

El segundo es el `comentario multilinea` o `comentario de bloque`, este se conforma de dos partes, la ***"llave de inicio"*** que son los caracteres `/*`, y la ***"llave de fin"*** que son los caracteres `*/`. Todo lo que esté entre estas dos ***"llaves"*** se tomara como un comentario, por lo que se ignorara cuando ejecutes tu código.



<hr><div align="center"><table><tr>
  <td><b><a href="./input-output.md">⬅ Salida y entrada de datos</a></b></td>
  <td><b><a href="./variables.md">Variables ⮕</a></b></td>
</tr></table></div>