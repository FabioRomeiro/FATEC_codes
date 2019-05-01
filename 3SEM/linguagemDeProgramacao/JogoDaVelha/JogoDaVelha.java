package jogo;

public class JogoDaVelha {

    private Jogadas[][] grade;
    private int jogada;
    private boolean finished;

    public JogoDaVelha() {

        this.jogada = 0;
        this.finished = false;
        this.grade = new Jogadas[3][3];

        for (int i = 0; i< 3; i++) {
            for (int j = 0; j< 3; j++)
                this.grade[i][j] = Jogadas.vazio;
        }
    }

    public boolean canContinue() {
        if(finished) {
            System.out.println("O jogo já foi finalizado!");
        } else {
            System.out.println("Esta na vez do jogador " + ((jogada % 2 == 0) ? "1" : "2"));
        }

        return !finished;
    }

    public boolean isPositionOcupied(int x, int y) {
        boolean isOcupied = grade[y][x] != Jogadas.vazio;
        if(isOcupied) {
            System.out.println("Posição já ocupada, tente outra!");
        }
        return isOcupied;
    }

    public void jogar(int x, int y) {

        if(!canContinue() || isPositionOcupied(x,y))
            return;

        grade[y][x] = (jogada%2 == 0) ? Jogadas.jogador1 : Jogadas.jogador2;
        jogada++;
        if(jogada >= (3 * 2 - 1))
            verificaResultado();
    }

    public boolean verificaDiagonais(Jogadas jogada) {
        return (
            (grade[0][0] == jogada && grade[1][1] == jogada && grade[2][2] == jogada) ||
            (grade[0][2] == jogada && grade[1][1] == jogada && grade[2][0] == jogada)
        );
    }

    public boolean verificaLinhasColunas(Jogadas jogada) {

        int pontosX;
        int pontosY;

        for (int i = 0; i<3; i++) {

            pontosX = 0;
            pontosY = 0;
            for (int j = 0; j < 3; j++) {
                if(grade[i][j] == jogada)
                    pontosX++;
                else if(grade[j][i] == jogada)
                    pontosY++;
            }
            if(pontosX == 3 || pontosY == 3)
                return true;
        }

        return false;
    }

    public boolean ehGanhador(Jogadas jogador) {
        return verificaLinhasColunas(jogador) || verificaDiagonais(jogador);
    }

    public boolean isGradeFull() {
        for (int i = 0; i<3; i++) {
            for (int j = 0; j < 3; j++) {
                if(grade[i][j] == Jogadas.vazio)
                    return false;
            }
        }
        return true;
    }

    public void verificaResultado() {
        boolean oneWon = ehGanhador(Jogadas.jogador1);
        boolean twoWon = ehGanhador(Jogadas.jogador2);
        if(!oneWon && !twoWon && isGradeFull()) {
            System.out.println("EMPATE!");
            finished = true;
        } else if (oneWon && !twoWon) {
            System.out.println("JOGADOR 1 GANHOU!");
            finished = true;
        } else if (!oneWon && twoWon) {
            System.out.println("JOGADOR 2 GANHOU!");
            finished = true;
        }
    }

    public void mostraGrade() {
        for (int i = 0; i < 3;i++) {
            for (int j = 0; j < 3;j++) {
                System.out.print(" " + this.grade[i][j].getSymbol() + ((j != (3-1)) ? " |" : "\n"));
            }
            System.out.println(((i != (3-1)) ? "-----------" : ""));
        }
    }
}
