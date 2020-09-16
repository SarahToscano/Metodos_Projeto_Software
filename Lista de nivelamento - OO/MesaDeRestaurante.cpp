#include "MesaDeRestaurante.h"

using std::list;

MesaDeRestaurante::MesaDeRestaurante(){}

MesaDeRestaurante::MesaDeRestaurante( int numeroMesa, Pedido *ptrPedido ){
    adicionaAoPedido( ptrPedido );
    setNumeroMesa( numeroMesa );
}

void MesaDeRestaurante::adicionaAoPedido( Pedido *ptrPedido ){
    pedidos.push_back( ptrPedido );
}

void MesaDeRestaurante::zeraPedidos(){
    list<Pedido*>::iterator it;

    if( !pedidos.empty()){
        for( it = pedidos.begin(); it != pedidos.end(); it++ )
            delete *it;
    }

    pedidos.clear();
}

double MesaDeRestaurante::calculaTotal(){
    list<Pedido*>::iterator it;
    double totalMesa = 0.0;

    if( !pedidos.empty()){
        for( it = pedidos.begin(); it != pedidos.end(); it++ )
            totalMesa += (*it)->getPrecoItem() * (*it)->getQuantidadeComprada();
    }

    return totalMesa;
}

bool MesaDeRestaurante::setNumeroMesa( int numeroM ){  
    if( numeroM > 0 && numeroM <= MAX_MESAS )
    {
        numeroMesa = numeroM;
        return true;
    }
    
    numeroMesa = 1;
    return false;
}