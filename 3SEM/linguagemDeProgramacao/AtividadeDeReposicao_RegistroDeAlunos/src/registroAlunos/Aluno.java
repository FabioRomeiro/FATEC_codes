package registroAlunos;

public class Aluno {
    private int matricula;
    private String nome;
    private String curso;
    private Prova [] provas;

    public Aluno(int matricula, String nome, String curso, Prova[] provas) {

        this.matricula = matricula;
        this.nome = nome;
        this.curso = curso;
        this.provas = provas;
    }

    public int getMatricula() {
        return matricula;
    }

    public void setMatricula(int matricula) {
        this.matricula = matricula;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCurso() {
        return curso;
    }

    public void setCurso(String curso) {
        this.curso = curso;
    }

    public Prova[] getProvas() {
        return provas;
    }

    public void setProvas(Prova[] provas) {
        this.provas = provas;
    }
}
