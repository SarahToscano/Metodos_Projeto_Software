public class ClimaTracker {
    String condicaoAtual;
    Phone phone;
    EmailCliente emailCliente;

    public ClimaTracker() {
        phone = new Phone();
        emailCliente = new EmailCliente();
    }

    public void setCondicaoAtual(String condicaoClimatica) {
        this.condicaoAtual = condicaoClimatica;
        if (condicaoClimatica == "chovendo") {
            String alerta = phone.geraClimaAlerta(condicaoClimatica);
            System.out.print(alerta);
        }
        if (condicaoClimatica == "ensolarado") {
            String alerta = emailCliente.geraClimaAlerta(condicaoClimatica);
            System.out.print(alerta);
        }
    }
}
