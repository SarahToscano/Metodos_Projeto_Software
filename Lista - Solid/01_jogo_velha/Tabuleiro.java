import java.util.ArrayList;



public class Tabuleiro {
    ArrayList<String> spots;

    public Tabuleiro() {
        this.spots = new ArrayList<String>();
        for (int i = 0; i < 9; i++) {
            this.spots.add(" ");
        }
    }
    
    public ArrayList<String> primeiraLinha() {
        ArrayList<String> firstRow = new ArrayList<String>();
        firstRow.add(this.spots.get(0));
        firstRow.add(this.spots.get(1));
        firstRow.add(this.spots.get(2));
        return firstRow;
    }

    public ArrayList<String> segundaLinha() {
        ArrayList<String> secondRow = new ArrayList<String>();
        secondRow.add(this.spots.get(3));
        secondRow.add(this.spots.get(4));
        secondRow.add(this.spots.get(5));
        return secondRow;
    }

    public ArrayList<String> terceiraLinha() {
        ArrayList<String> thirdRow = new ArrayList<String>();
        thirdRow.add(this.spots.get(6));
        thirdRow.add(this.spots.get(7));
        thirdRow.add(this.spots.get(8));
        return thirdRow;
    }
    
    public Boolean verificaGanhador(){
    	if((this.spots.get(0) == this.spots.get(1)) && (this.spots.get(0) == this.spots.get(2))){
    		return true;
    	}else if ((this.spots.get(3) == this.spots.get(4)) && (this.spots.get(3) == this.spots.get(5))) {
			return true;
    	}else{
    		return false;
    	}
    }
    

    
    public void display() {
        String tabuleiroFormatado = this.spots.get(0) + " | " + this.spots.get(1) + " | " + this.spots.get(2) + "\n" + this.spots.get(3) + " | " + this.spots.get(4) + " | " + this.spots.get(5) + "\n" + this.spots.get(6) + " | " + this.spots.get(7) + " | " + this.spots.get(8);
        System.out.print(tabuleiroFormatado);
    }
}
