# Métodos de Projeto de Software
## Lista de Nivelamento sobre Orientação a Objeto

### Aluna: Sarah Andrade Toscano de Carvalho 
### Matrícula: 20170022975
#### Professor: Raoni Kulesza

Esta atividade consiste na resolução da lista dee questões disbolibilizada pelo professor Raoni Kulesza na disciplina de Métodos de Projetos de Software ministrada em 2020 na Universidade Federal da Paraíba.

## Questão 1

1. 
   * **a)** A utilização de POO nos permite “fragmentar” o código em diversas partes isoladas através das classes, assim a manutenabilidade do código é mais prática pois para modificações mais simples apenas é necessário alterar o conteúdo da classe e não estrutura completa do código. 
    
   * **b)** Um objeto equivale a instância de uma classe, o mesmo também possui atributos e métodos.
    
   * **c)** Propriedade dinâmica é quando o método de uma classe é sobrescrito pelo método de outra classe com mesmo nome, isso acontece quando tem herança, e o seu tipo é determinado em tempo de execução.
Propriedade estática é quando  o método é determinado durante o tempo de compilação, sem sobrescrita de método.

		**Exemplo Propriedade Estática:**

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

		***Output: I’m A***

		```
		
		
		**Exemplo Propriedade Dinâmica:**

		```
		Class typeA{
		      public  void func (){
			print(“I’m A”)
		      }
		}

		Classe typeB extends typeA{
		      public  void func (){
			 print(“I’m B”)
		      }
		      
		      public  void main(){
		         typeA obj = new typeB();
		         obj.func();
		      }
		}

		***Output: I’m B***
		```
		
   * **d)** O Encapsulamento organizar os atributos e métodos do objeto, assim ele oculta determinados atributos e métodos de uma classe das demais classes. O encapsulamento é importante para  manter a organização do código e para que o sistema esteja pronto para futuras modificações.

		
   * **e)** Os estados são os valores dos atributos do objeto e representam suas características. já o comportamento é para exercer funções (métodos) que aquele objeto possui. 

   * **f)** O código apresenta uma classe denominada Carteira de Investimento com 3 atributos (ação, valor e risco) e 4 métodos dos quais um é o construtor. A estrutura do código está [disponível aqui](https://github.com/SAndradeTC/Metodos_Projeto_Software/blob/master/Lista%20de%20nivelamento%20-%20OO/estado_comportamento.py) e o mesmo foi implementado em python.
   
   * **g)** A localização do objeto na memória.
   
   * **h)** A referência recebe a nova referência do novo objeto.
   
   * **i)** Classe é uma estrutura que agrupa objetos de acordo com as características, como métodos e atributos. Em uma classe são definidas o comportamento e estado dos objetos. No código implementado para a letra 'f' temos uma classe, 4 métodos e 3 atributos implementados, consulte o [código aqui](https://github.com/SAndradeTC/Metodos_Projeto_Software/blob/master/Lista%20de%20nivelamento%20-%20OO/estado_comportamento.py).
   
   
   * **j)** Uma variável de instância pertence a um tipo já definido pela linguagem, e ela não faz parte de nenhum agrupamento, ela existe sozinha. Uma variável de classe faz parte de um conjunto de dados que chamamos de objeto, ela só pode ser chamada junto com o nome do seu objeto.
	O nome disso é sobrecarga, o java consegue distinguir pelos parâmetros daquele método.
	
   * **k)** this é usado para referenciar a própria classe.
	    super é usado para fazer referência a atributos da super classe.
	    this() é usado para referenciar um construtor da mesma classe.
	    super() é usado para referenciar o construtor da super classe.

   
   * **l)** 
   
   * **m)** Um Error não pode ser tratado pela aplicação, enquanto os exceptions podem ser capturadas e tratadas via try e catch.
   
   * **n)** Try-catch: Comando usado para tratar exceções, o try é um bloco onde existem comandos que podem vir a causar uma exceção, e o catch descreve o que ocorrerá depois disso.  
Finally: Mesmo acontecendo uma exceção, e está sendo capturada, o que estiver dentro do bloco finally irá acontecer.
Throw/Throws: Usado quando queremos que a exceção seja tratada em um outro bloco, e não no que provocou a exceção.





   
   

   



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

### Referências

- [Lista de Exercício](https://github.com/SAndradeTC/Metodos_Projeto_Software/blob/master/Lista%20de%20nivelamento%20-%20OO/Quest%C3%B5es.pdf)

