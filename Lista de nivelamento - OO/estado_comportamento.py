class Carteira_Investimento:  
    def __init__(self, a, r): #método - comportamento
        self.acao = a #atributo - estado
        self.valor = 0 #atributo - estado
        self.risco  = r #atributo - estado

    def imprima(self): #método - comportamento
        if self.valor == 0: #sem investimento
            print("Sem investimento na ação", (self.acao))
        else:
            print( "Investimento de R$", (self.valor), "na acao", self.acao, "com risco", self.risco)

    def invista(self, v): #método - comportamento
        self.valor += v
        Carteira_Investimento.imprima(self)

    def retire(self, v): #método - comportamento
        self.valor-=v
        if(self.valor<0):  
            self.valor = 0
        Carteira_Investimento.imprima(self)

def main():
    acao_1 = Carteira_Investimento('Vale', 'baixo')
    acao_2 = Carteira_Investimento('Petrobras', 'alto')

    Carteira_Investimento.invista(acao_1, 100)
    Carteira_Investimento.invista(acao_2, 80)
    Carteira_Investimento.retire(acao_2, 70)

main()

