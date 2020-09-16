#include <iostream>
#include <string>
#include <iomanip>

#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include "RestauranteCaseiro.h"

using namespace std;

int RestauranteCaseiro::quantidadePedidos = 0;

int main(){
    cout << fixed << setprecision( 2 );

    RestauranteCaseiro *rc1 = new RestauranteCaseiro();
    int opcao, numeroMesa;

    int numero;
    string descricao;
    int quantidadeComprada;
    double precoItem;

    Pedido *ptrPedido;

    while(1){
        cout << "1 - adicionar pedido" << endl;
        cout << "2 - calcular total arrecadado pelo restaurante" << endl;
        cout << "3 - cancelar todos os pedidos de alguma mesa" << endl;
        cout << "0 - sair" << endl;
        cout << endl;
        cin >> opcao;

        if( opcao == 0 )
            break;

        switch( opcao ){
            case 1: 
                cout << "\nadicionando novo pedido..." << endl;
                cout << "\nNúmero da mesa: ";
                cin >> numeroMesa;
                descricao = "descrição";
                cout << "Quantidade comprada: ";
                cin >> quantidadeComprada;
                cout << "Preco por item: ";
                cin >> precoItem;
                cout << "\n\n";
                ptrPedido = new Pedido( numero, descricao, quantidadeComprada, precoItem );
                rc1->adicionaAoPedido( numeroMesa, ptrPedido );
                break;
            case 2: 
                cout << "\nTotal arrecadado pelo restaurante: "
                    << rc1->calculaTotalRestaurante() << "\n\n";
                break;
            case 3: 
                cout << "\ncancelar todos oe pedidos da mesa: ";
                cin >> numeroMesa;
                cout << "\n\n";
                rc1->zeraPedidosEmMesa( numeroMesa );
                break;
        }
    }
}