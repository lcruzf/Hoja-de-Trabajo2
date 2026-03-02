#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    string nombre;
    int precioUnitario;
    int cantidadProduc,subtotal;
    double iva,total;
    cout << "Ingresa nombre completo del cliente: ";
    getline(cin, nombre);

    cout << "Ingresa precio del producto: ";
    cin >> precioUnitario;

    cout << "Introduce la cantidad de produtos comprados: ";
    cin >> cantidadProduc;

    subtotal = precioUnitario * cantidadProduc;
    iva = subtotal * 0.12;
    total = subtotal + iva;

    cout << fixed << setprecision(2);
    cout << "Nombre: " << nombre << endl;
    cout << "Precio: " << precioUnitario << endl;
    cout << "Cantidad: " << cantidadProduc << endl;
    cout << "Subtotal: " << subtotal << endl;
    cout << "Iva: " << iva << endl;
    cout << "Total: " << total << endl;

    return 0;
}