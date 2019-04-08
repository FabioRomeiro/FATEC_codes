package ex8;

public class Jogo {

    public static void main(String[] args) {
        Baralho baralho = new Baralho();
        baralho.imprimirBaralho();
        System.out.println("\nEMBARALHANDO\n");
        baralho.embaralhar();
        baralho.imprimirBaralho();
        System.out.println("\nEMBARALHANDO\n");
        baralho.embaralhar();
        baralho.imprimirBaralho();
        System.out.println("\nVERIFICANDO EXISTENCIA\n");
        System.out.println(baralho.hasCarta(new Carta("1", "Paus")));
        System.out.println("\nTIRANDO DO BARALHO\n");
        Carta carta = baralho.distribuirCarta();
        System.out.println(carta.getNome() + " | " + carta.getNaipe());
        System.out.println("\nVENDO O BARALHO\n");
        baralho.imprimirBaralho();
    }
}
