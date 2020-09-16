#include "RestauranteCaseiro.h"

double RestauranteCaseiro::calculaTotalRestaurante(){
    double totalRestaurante = 0.0;

    for( int i = 0; i < MAX_MESAS; i++ )
    {
        totalRestaurante += mesas[ i ].calculaTotal();
    }

    return totalRestaurante;
}

void RestauranteCaseiro::adicionaAoPedido( int numeroMesa, Pedido *ptrPedido ){
    ptrPedido->setNumero( ++quantidadePedidos );
    mesas[ numeroMesa - 1 ].adicionaAoPedido( ptrPedido );
}

void RestauranteCaseiro::zeraPedidosEmMesa( int numeroMesa ){
    mesas[ numeroMesa - 1 ].zeraPedidos();
}