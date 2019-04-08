package ex8;

public class Baralho {

    private Carta[] cartas = new Carta[56];

    public Baralho() {

        String[] naipes = {"Paus", "Ouros", "Copas", "Espadas"};

        for (int i = 0; i < 4; i++) {

            for (int j = 1; j <= 13; j++) {

                String nome = Integer.toString(j);

                if(j == 11) nome = "Valete";
                else if(j == 12) nome = "Dama";
                else if(j == 13) nome = "Rei";

                this.cartas[(j-1) + (13* i)] = new Carta(nome, naipes[i]);
            }
        }

        for (int i = 52; i < 56; i++)
            this.cartas[i] = new Carta("coringa", "coringa");
    }

    public void embaralhar() {
        for (int i = 0; i < (int)(Math.random()*101); i++) {
            int index1 = (int)(Math.random()*56);
            int index2 = (int)(Math.random()*56);
            Carta aux = this.cartas[index1];
            this.cartas[index1] = this.cartas[index2];
            this.cartas[index2] = aux;
        }
    }

    public Carta distribuirCarta() {
        if (this.cartas[0].getNome().equals("vazio")) return null;
        Carta carta = this.cartas[0];

        for (int i = 0; ; i++) {
            if(i == 55) {
                this.cartas[i] = new Carta("vazio", "vazio");
                break;
            }
            this.cartas[i] = this.cartas[i+1];
        }

        return carta;
    }

    public boolean hasCarta(Carta cartaEsperada) {
        for (Carta carta: this.cartas) {
            if (carta.getNome().equals(cartaEsperada.getNome()) &&
                carta.getNaipe().equals(cartaEsperada.getNaipe())) {
                return true;
            }
        }
        return false;
    }

    public void imprimirBaralho() {
        for(Carta carta: cartas) {
            System.out.println(carta.getNome() + " | " + carta.getNaipe());
        }
    }
}
