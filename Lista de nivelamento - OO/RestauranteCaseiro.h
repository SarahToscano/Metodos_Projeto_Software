#ifndef RESTAURANTE_CASEIRO_H
#define RESTAURANTE_CASEIRO_H

#include "MesaDeRestaurante.h"

class RestauranteCaseiro{
    public:
        double calculaTotalRestaurante();
        void adicionaAoPedido( int numeroMesa, Pedido *ptrPedido );
        void zeraPedidosEmMesa( int numeroMesa );
    private:
        MesaDeRestaurante *mesas  = new MesaDeRestaurante[ MAX_MESAS ];
        static int quantidadePedidos;
};

#endif