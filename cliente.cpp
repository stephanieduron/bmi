#include <iostream>
using namespace std;

class Cliente {
private:
    int numCuenta;
    int saldoinicial;
    int totalcargos;
    int totalcreditos;
    int limitecredito;

public:
Cliente(int cuenta, int saldo, int cargos, int creditos, int limite)
        : numCuenta(cuenta), saldoinicial(saldo), totalcargos(cargos), totalcreditos(creditos), limitecredito(limite) {}

        int calcularNuevoSaldo() {
        return saldoinicial + totalcargos - totalcreditos;
    }
    void verificarLimiteCredito() {
        int nuevoSaldo = calcularNuevoSaldo();
        cout << "El nuevo saldo de la cuenta " << numCuenta << " es: " << nuevoSaldo << endl;
        
        if (nuevoSaldo > limitecredito) {
            cout << "Se excedió el límite de su crédito." << endl;
        } else {
            cout << "El saldo está dentro del límite de crédito." << endl;
        }
    }
};

int main() {int numCuenta, saldoInicial, totalCargos, totalCreditos, limiteCredito;

    cout << "Ingrese el numero de cuenta: ";
    cin >> numCuenta;

    cout << "Ingrese el saldo inicial: ";
    cin >> saldoInicial;

    cout << "Ingrese el total de los articulos cargados: ";
    cin >> totalCargos;

    cout << "Ingrese el total de los creditos aplicados: ";
    cin >> totalCreditos;

    cout << "Ingrese el limite de credito permitido: ";
    cin >> limiteCredito;

    Cliente cliente(numCuenta, saldoInicial, totalCargos, totalCreditos, limiteCredito);

    cliente.verificarLimiteCredito();

    return 0;
}