public class Saudacao {
    String formalidade;

    public String saudar () {
        if (this.formalidade == "formal") {
            return "Bom dia, sr.";
        }
        else if (this.formalidade == "casual") {
            return "E aí, blz?";
        }
        else if (this.formalidade == "intimo") {
            return "Oi querida!";
        }
        else {
            return "Oi.";
        }
    }

    public void setFormalidade(String formalidade) {
        this.formalidade = formalidade;
    }
}
