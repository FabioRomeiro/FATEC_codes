package registroAlunos;

public class Turma {

    private String nome;
    private int qtdAlunos;
    private Aluno[] alunos;

    public Turma(String nome, int qtdAlunos) {

        this.nome = nome;
        this.qtdAlunos = qtdAlunos;
        this.alunos = new Aluno[qtdAlunos];
    }

    private void printChanges(String campo, String nomeDoAluno, String oldValue, String newValue) {
        System.out.println("Alterado o " + campo + " de " + nomeDoAluno);
        System.out.println(oldValue + " --------> " + newValue);
    }

    public Aluno alterarDadosDoAlunoPorMatricula(int matricula, String campo, String novoDado) {



        Aluno aluno = getAlunoByMatricula(matricula);

        if (aluno == null) {
            System.out.println("Aluno não encontrado");
            return aluno;
        }

        String oldValue;
        campo = campo.toLowerCase();

        if(campo.equals("nome")) {

            oldValue = aluno.getNome();
            aluno.setNome(novoDado);
            printChanges(campo, oldValue, oldValue, aluno.getNome());

        } else if (campo.equals("curso")) {

            oldValue = aluno.getCurso();
            aluno.setCurso(novoDado);
            printChanges(campo, aluno.getNome(), oldValue, aluno.getCurso());

        } else if (campo.equals("provas"))
            System.out.println("Não é possivel alterar as provas através deste metodo, tente realizar a operação manualmente");
        else if (campo.equals("matricula"))
            System.out.println("Não é possivel alterar a matrícula do aluno");
        else
            System.out.println("Campo não encontrado, verifique se o digitou corretamente");

        return aluno;
    }

    public Aluno getAlunoByNome(String nome) {
        for(int i = 0; i < qtdAlunos; i++) {
            if(alunos[i] != null && alunos[i].getNome().equals(nome)) {
                return alunos[i];
            }
        }
        System.out.println("Aluno de nome " + nome + " não está nessa turma");
        return null;
    }

    public void printChamada() {
        for(Aluno aluno : alunos) {
            if(aluno == null) break;
            System.out.println(aluno.getNome());
        }
    }

    public void deletarAlunoByNome(String nome) {

        boolean encontrou = false;

        for(int i = 0; i < qtdAlunos; i++) {

            if(alunos[i] != null && alunos[i].getNome().equals(nome)) {
                alunos[i] = null;
                encontrou = true;
            }

            if(encontrou && i != (qtdAlunos-1)) {
                alunos[i] = alunos[i + 1];
            }
        }
        System.out.println("Aluno de nome " + nome + " foi deletado");
    }

    public Aluno getAlunoByMatricula(int matricula) {
        for(int i = 0; i < qtdAlunos; i++) {
            if(alunos[i] != null && alunos[i].getMatricula() == matricula) {
                return alunos[i];
            }
        }
        System.out.println("Aluno de matricula " + matricula + " não está nessa turma");
        return null;
    }

    public void addAluno(Aluno aluno) {

        if(alunos[qtdAlunos - 1] != null) {
            System.out.println("Turma cheia: Não é possivel colocar mais alunos nessa turma");
            return;
        }

        for(int i = 0; i < qtdAlunos; i++) {
            if (alunos[i] != null && alunos[i].getMatricula() == aluno.getMatricula()) {
                System.out.println("Aluno com matricula " + aluno.getMatricula() + " já está nessa turma");
                return;
            } else if(alunos[i] == null) {
                alunos[i] = aluno;
                break;
            }
        }
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getQtdAlunos() {
        return qtdAlunos;
    }

    public void setQtdAlunos(int qtdAlunos) {
        this.qtdAlunos = qtdAlunos;
    }

    public Aluno[] getAlunos() {
        return alunos;
    }

    public void setAlunos(Aluno[] alunos) {
        this.alunos = alunos;
    }
}
