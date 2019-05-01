package jogo;

public enum Jogadas {
    vazio(" "), jogador1("X"), jogador2("O");

    private String symbol;

    Jogadas(String simbolo) {
        symbol = simbolo;
    }

    public String getSymbol() {
        return symbol;
    }
}
