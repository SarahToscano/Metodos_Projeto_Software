#ifndef MESA_RESTAURANTE_H
#define MESA_RESTAURANTE_H

#define MAX_MESAS 10

#include "Pedido.h"
#include <list>

class MesaDeRestaurante{
    public:
        MesaDeRestaurante();
        MesaDeRestaurante(  int numeroMesa, Pedido *ptrPedido );

        void adicionaAoPedido( Pedido *ptrPedido );
        void zeraPedidos();
        double calculaTotal();

        bool setNumeroMesa( int numeroMesa );
    private:
        std::list<Pedido*> pedidos;
        int numeroMesa;
};

#endif