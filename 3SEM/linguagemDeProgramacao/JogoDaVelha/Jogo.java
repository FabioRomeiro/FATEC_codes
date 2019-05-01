package jogo;

public class Jogo {
    public static void main(String[] args) {
        JogoDaVelha jogo = new JogoDaVelha();

        jogo.mostraGrade();
        System.out.println();

        jogo.jogar(0,1);

        System.out.println();
        jogo.mostraGrade();
        System.out.println();

        jogo.jogar(0,2);

        System.out.println();
        jogo.mostraGrade();
        System.out.println();

        jogo.jogar(0,2);
        jogo.jogar(1,1);

        System.out.println();
        jogo.mostraGrade();
        System.out.println();

        jogo.jogar(1,2);

        System.out.println();
        jogo.mostraGrade();
        System.out.println();

        jogo.jogar(2,1);

        System.out.println();
        jogo.mostraGrade();
        System.out.println();
    }
}
