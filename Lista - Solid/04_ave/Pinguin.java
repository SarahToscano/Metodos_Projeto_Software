public class Pinguin implements Ave {
    String localizacaoAtual;
    int numeroDePenas;

    public Pinguin(int contagemNumeroDePenas) {
        this.numeroDePenas = contagemNumeroDePenas;
    }

    public void trocaPlumagem() {
        this.numeroDePenas -= 1;
    }

    public void voa() {
        throw new UnsupportedOperationException();
    }

    public void nada() {
        this.localizacaoAtual = "na agua";
    }
}
