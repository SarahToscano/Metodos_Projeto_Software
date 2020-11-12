public class Aguia implements Ave {
    String localizacaoAtual;
    int numeroDePenas;

    public Aguia(int contagemNumeroPenas) {
        this.numeroDePenas = contagemNumeroPenas;
    }

    public void voa() {
        this.localizacaoAtual = "no ar";
    }

    public void trocaPlumagem() {
        this.numeroDePenas -= 1;
    }
}
