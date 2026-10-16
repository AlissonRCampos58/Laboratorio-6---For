#include <iostream>
using namespace std;

int main() {
    int numlimi;
    int sum = 0;
    int cont = 0;

    cout << "Ingrese un numero: ";
    cin >> numlimi;

    cout<<"-----IMPARES-----"<<endl;
    for (int i = 1; i <= numlimi; i += 2) {
        cout << i << " "<<endl;
        sum += i;
        cont++;
    }

    cout << "Cantidad de impares: " << cont << endl;
    cout << "Suma de los impares: " << sum << endl;

    return 0;
}
