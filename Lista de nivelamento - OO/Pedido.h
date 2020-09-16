#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>

class Pedido{

    private:
        int numero; //atributo - ID do item comprado
        std::string descricao;
        int quantidadeComprada;
        double precoItem; 
        
    public:
        Pedido(int numero=0, const std::string &descricao = "", int quantidadeComprada=0, 
                double precoItem=0.0);  //Construtor  - inicializa os atributos inteiros com 0 e a string vazia
        ~Pedido(); // Destrutor, libera a memória alocada para o Pedido
        
        // Métodos de set
        void setNumero( int numero ); 
        void setDescricao( const std::string &descricao );
        void setQuantidadeComprada( int quantidadeComprada );
        void setPrecoItem( double precoItem );

        int getQuantidadeComprada() const;
        double getPrecoItem() const;
    
};

#endif
