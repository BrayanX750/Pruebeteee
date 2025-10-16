#include <iostream>   // Librería para entrada/salida de datos
    using namespace std;  // Para no escribir std:: antes de cout o cin

int main() {          // Función principal del programa
    int num1, num2, suma;  // Declaración de variables enteras

    cout << "Ingresa el primer número: ";
    cin >> num1;           // Lee el primer número desde el teclado

    cout << "Ingresa el segundo número: ";
    cin >> num2;

    suma = num1 + num2;    // Suma los dos números

    cout << "La suma es: " << suma << endl;  // Muestra el resultado

    return 0;              // Indica que el programa terminó correctamente
}
