#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero de inicio: ";
    cin >> numero;

    cout << "------Cuenta regresiva------"<< ":" << endl;

    for (int i = numero; i >=0; i--) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
