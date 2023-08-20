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



<div align="center"><table><tr>
  <td><b><a href="./README.md">⬅ Desde 0</a></b></td>
</tr></table></div>