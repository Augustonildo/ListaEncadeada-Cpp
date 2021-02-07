#include "ListaEncadeada.hpp"

#include <iostream>
using namespace std;

int main() {
    ListaEncadeada *lista;
    TipoItem *item;

    lista = new ListaEncadeada();
    item = new TipoItem(10);
    
    cout << "Iniciando lista" << endl;
    lista->InsereFinal(*item);

    item->SetChave(20);
    lista->InsereFinal(*item);

    item->SetChave(40);
    lista->InsereFinal(*item);

    int novoValor;
    cin >> novoValor;
    item->SetChave(novoValor);
    lista->InsereOrdenado(*item);
    lista->Imprime();

    delete lista;
    delete item;
    return 0;
}