package registroAlunos;

public class Teste {

    public static void adicionaNoArrayProvas(Prova[] array, Prova... args) {
        for(int i = 0; i < args.length; i++) {
            array[i] = args[i];
        }
    }

    public static void main(String[] args) {

        Prova[] provas = new Prova[4];

        Teste.adicionaNoArrayProvas(
                provas,
                new Prova("LP2", 1, 7.00, 2),
                new Prova("LP2", 2, 10.00, 5),
                new Prova("BD3", 1, 6.00, 1));

        Turma turma = new Turma("BD3", 15);
        turma.addAluno(new Aluno(125487895, "Fábio Lucas Romeiro de Castro", "Banco de Dados", provas));
        turma.addAluno(new Aluno(456151357, "Lucas Fabio Romeiro Castro", "Banco de Dados", provas));
        turma.addAluno(new Aluno(153268488, "Andre Alexandre Romeiro de Castro", "Banco de Dados", provas));
        turma.addAluno(new Aluno(153268488, "Andre Alexandre Romeiro de Castro", "Banco de Dados", provas));

        turma.printChamada();

        System.out.println();

        turma.alterarDadosDoAlunoPorMatricula(153268488, "nome", "Fabio Alexandre");

        System.out.println();

        turma.printChamada();

        System.out.println();

        turma.deletarAlunoByNome("Fábio Lucas Romeiro de Castro");

        System.out.println();

        turma.printChamada();
    }
}
