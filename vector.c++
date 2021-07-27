#include <iostream>
#include <vector>
using namespace std;

void muestraPosicion(vector<int> &parametro, int index) {
    cout << parametro[index];
}

int main() {
    cout << "Write the position";
    vector<int> lista;
    lista = { 6, 8, 7, 3, 2, 8, 9, 3 };

    int posicion;
    cin >> posicion;
    muestraPosicion(lista, posicion);
}

