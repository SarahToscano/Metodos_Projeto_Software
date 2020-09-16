#include "Pedido.h"

Pedido::Pedido( int numero, const std::string &descricao, int quantidadeComprada, double precoItem ){
    setNumero( numero );
    setDescricao( descricao );
    setQuantidadeComprada( quantidadeComprada );
    setPrecoItem( precoItem );
}

void Pedido::setNumero( int num ){
    numero = ( ( num < 0 )? 0 : num );
}

void Pedido::setDescricao( const std::string &d ){
    descricao = d;
}

void Pedido::setQuantidadeComprada( int quantidadeC ){
    quantidadeComprada = ( ( quantidadeC < 0 )? 0 : quantidadeC );
}

void Pedido::setPrecoItem( double precoI ){
    precoItem = ( ( precoI < 0.0 )? 0.0 : precoI );
}

int Pedido::getQuantidadeComprada() const{
    return quantidadeComprada;
}

double Pedido::getPrecoItem() const{
    return precoItem;
}

Pedido::~Pedido(){}