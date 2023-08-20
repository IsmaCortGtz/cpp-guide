#include <iostream>

int main(){
  double a, b;
  std::cout << "Ingresa el numero a: ";
  std::cin >> a;
  std::cout << "Ingresa el numero b: ";
  std::cin >> b;

  std::cout << "\nLa suma de a + b = " << a + b << std::endl;
  std::cout << "\nLa resta de a - b = " << a - b << std::endl;
  std::cout << "\nLa multiplicación de a * b = " << a * b << std::endl;
  std::cout << "\nLa división de a / b = " << a / b << std::endl;
  return 0;
}