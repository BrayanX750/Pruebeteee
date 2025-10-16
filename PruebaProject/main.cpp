#include <iostream>   // Librería para entrada/salida de datos
    using namespace std;  // Para no escribir std:: antes de cout o cin

int main() {          // Función principal del programa
    int num1,num2;
    cout <<"Ingrese el primer numero del programa: ";
    cin >> num1;

    cout<<"ingrese el segundo numero del programa: ";
    cin >> num2;

    if(num1>num2){
        cout<<"el numero mayor es: " << num1 << std::endl;
    }
    else if(num2 >num1){

        cout <<"el numero mayor es: " <<num2 << std::endl;
    }
    else(num1==num2);{
            cout <<"ambos numeros son iguales";
        }

}
