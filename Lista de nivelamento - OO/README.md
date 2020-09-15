# Métodos de Projeto de Software
## Lista de Nivelamento sobre Orientação a Objeto

### Aluna: Sarah Andrade Toscano de Carvalho 
### Matrícula: 20170022975
#### Professor: Raoni Kulesza

Esta atividade consiste na resolução da lista dee questões disbolibilizada pelo professor Raoni Kulesza na disciplina de Métodos de Projetos de Software ministrada em 2020 na Universidade Federal da Paraíba.

## Questão

 1. 
    * **a)** A utilização de POO nos permite “fragmentar” o código em diversas partes isoladas através das classes, assim a manutenabilidade do código é mais prática pois para modificações mais simples apenas é necessário alterar o conteúdo da classe e não estrutura completa do código. 
    
    * **b)** Um objeto equivale a instância de uma classe, o mesmo também possui atributos e métodos.
    
    * **c)** Propriedade dinâmica é quando o método de uma classe é sobrescrito pelo método de outra classe com mesmo nome, isso acontece quando tem herança, e o seu tipo é determinado em tempo de execução.
Propriedade estática é quando  o método é determinado durante o tempo de compilação, sem sobrescrita de método.
```
Class typeA{
public static void func (){
		print(“I’m A”)
}
}

Classe typeB extends typeA{
public static void func (){
		  print(“I’m B”)
}
public static void main(){
typeA obj = new typeB();
obj.func();
}
}

***Output: I’m Class type A***

```




## Exercício 01: Escala
### Estratégias e Resultados
  Para aplicar uma modificação escalar em uma Figura, deve-se adicionar um fator multiplicativo na matriz modelo. No camera_position
  deste exercício a escala aplicada a Figura foi (x,y,z) = (0.33, 1.5, 0). Para isso, o componente x da matriz identidade (posição 0 do model_array) 
  foi multiplicado pela sua respectiva escala (0.33) e a posição 5 do model_array, a qual representa o eixo y, foi multiplicado por 1,5. 
  
  A modificação do código está ilustrada na Figura abaixo:

   <p align="center">
    <img src="https://github.com/SAndradeTC/Computacao-Grafica/blob/master/Atividade_3/Imagens/escala_code.png">
  </p>

  Dessa forma o resultado obtido está ilustrado na Figura a seguir:   

  <p align="center">
    <img src="https://github.com/SAndradeTC/Computacao-Grafica/blob/master/Atividade_3/Imagens/escala.png">
  </p>

## Exercício 02: Translação
### Estratégias e Resultados
  Para aplicar a translação em coordenadas homogêneas foi utilizado o seguinte princípio, a nova posição da Figura no eixo x
  seria equivalente a posição original somada da distância equivalencia a translação no eixo. Dessa forma, como o intuito seria transladar
  a figura com (x,y,z) = (1,0,0). 
  
  Assim, modficando a matriz modelo com esses valores, a sua posição 12 foi alterada com o valor da 
  distância equivalente ao X da translação. Para as coordenadas Y e Z não foram necessárias alterações. Em relação ao exercício anterior, 
  os fatores de escala foram restaurados para o valor unitário e apenas houve a inclusão da modificação citada anteriormente.
  As alterações no código são ilustradas a seguir:

  <p align="center">
    <img src="https://github.com/SAndradeTC/Computacao-Grafica/blob/master/Atividade_3/Imagens/translacao_code.png">
  </p>
  
  O resultado está ilustrado na Figura abaixo:

  <p align="center">
    <img src="https://github.com/SAndradeTC/Computacao-Grafica/blob/master/Atividade_3/Imagens/translacao_figura.png">
  </p>

## Exercício 03: Projeção Perspectiva
### Estratégias e Resultados
  Para atribuir uma projeção perspectiva da imagem é preciso modificar a matriz de projeção para adicionarmos o parâmetro 
  'd' que equivale a distancia do centro de projeção  até a origem do sistema de coordenadas da câmera. Para este exercício
  foi utilizado uma distância de 0.5.
  A matriz projeção utilizada consiste na Figura abaixo, a qual considera a câmera na origem de seu sistemas de coordenadas.
  
  <p align="center">
    <img src="https://github.com/SAndradeTC/Computacao-Grafica/blob/master/Atividade_3/Imagens/matriz_de_projecao.png">
  </p>

  Dessa forma, foi o d foi substituido na matriz de projeção nas posições indicadas conforme a Figura e o resultado obtido
  com a compilação do código foi o seguinte:
  <p align="center">
    <img src="https://github.com/SAndradeTC/Computacao-Grafica/blob/master/Atividade_3/Imagens/proje.png">
  </p>


## Exercício 04: Posição da Câmera
### Estratégias e Resultados

Neste exercício, para realizar modificações no posiconamento da câmera oram realizadas algumas implementações de transformações
e foi mantido as alterações na matriz de projeção do tópico anterior.

Para construir um sistema de coordenadas básicos para a câmera é primordial definir a configuração de 3 itens.
Na lista abaixo eles são defindos e também são apresentados os valores utilizados para esta implementação.
- A posição da câmera (x,y,z) = (-0.1,0.1,0.25);
- Ponto para o qual a câmera está direcionada (x,y,z) = (0,0,0);
- O vetor UP (x,y,z) = (0,1,0).

Uma vez que estes dados são definidos é preciso realizar o seguinte cálculo:

<p align="center">
    <img src="https://github.com/SAndradeTC/Computacao-Grafica/blob/master/Atividade_3/Imagens/calculo.png">
  </p>

Dessa forma teremos as coordenadas da matriz B, que serão utilizadas para calcular a matriz de visualização.
Para a realização desse cálculo foram utizadas funções geométricas do glm como o normalize e o cross. Tal recursos
são utilizados nas linhas 90-93 do arquivo main.cpp.

Após esses cálculos temos a matriz B, no entanto ainda é necessário preencher um array com sua representação transposta e
multiplicarmos pela matriz exemplificada na Figura abaixo:

<p align="center">
    <img src="https://github.com/SAndradeTC/Computacao-Grafica/blob/master/Atividade_3/Imagens/calculo2.png">
  </p>

Dessa forma, estabelecemos a matriz de visualização com o produto entre essas duas matrizes. Desta forma o resultado
obtido foi o seguinte: 

<p align="center">
    <img src="https://github.com/SAndradeTC/Computacao-Grafica/blob/master/Atividade_3/Imagens/camera.png">
  </p>

## Exercício 05: Transformação Livre
### Estratégias e Resultados
  Para essa etapa de tranformação livre optou-se alterar os valores das matrizes de visualação, modelo e perspectiva
  com o intuito de modificar a Figura de dois triangulos, um azul e outro vermelho.
  A metodologia adotada foi a mesma dos exercícios 1, 2 e 3, respectivamente. 

  - Inicialmente a matriz model foi alterada para que a Figura tivesse os seguintes fatores em escala
  (x, y, z) = (0.95, 1.8, 1.8). 

  - Em seguida, ainda na matriz model foi adicionado o fator translação em (x,y,z) = (0.6, -0.9, 0.6).

  - A matriz de projeção perspectiva foi alterada para um d equivalente a 3.4.

  - O vetor UP ficou na direção (0,1,0);

  - O ponto de visão da câmera foi (0,0,0);

  - O posicionamento da câmera através da matriz view para as coordenadas ficou (-1/0.8, 0.8, 1.2)

Assim, o resultado final, o qual está ilustrado abaixo

<p align="center">
      <img src="https://github.com/SAndradeTC/Computacao-Grafica/blob/master/Atividade_3/Imagens/final3.png">
  </p>

  Dessa forma, essas foram as modificações livres realizadas no Figura incial da atividade.

  
### Referências

- [Definição do projeto](https://sig-arq.ufpb.br/arquivos/2020251182af5d2276812b448ad7142ee/trabalho_3.pdf)
- [Código suporte - disponibilizado pelo professor](https://github.com/capagot/icg/tree/master/03_transformations)
- [Funções Geométricas do GLM](https://glm.g-truc.net/0.9.4/api/a00131.html)
