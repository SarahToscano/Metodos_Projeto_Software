public class UpgradeApartamento {
    public void upgrade(Apartamento apartamento) {
        apartamento.areaApartamento += 40;

        if (apartamento.getClass() != Studio.class)
            apartamento.numeroQuartos += 1;
    }
}
