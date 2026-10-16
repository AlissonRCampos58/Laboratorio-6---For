#include <iostream>
using namespace std;

int main() {
    int mult;

    cout << "Ingrese un numero: "<<endl;
    cin >> mult;

    cout << "Multiplos de 5 hasta " << mult << ":" << endl;

    for (int i = 5; i <= mult; i += 5) {
        cout << i << " ";
    }

    return 0;
}
