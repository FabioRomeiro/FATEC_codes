package registroAlunos;

public class Prova {

    private String materia;
    private int numero;
    private double nota;
    private int peso;

    public Prova(String materia, int numero, double nota, int peso) {

        this.materia = materia;
        this.numero = numero;
        this.nota = nota;
        this.peso = peso;
    }

    public String getMateria() {
        return materia;
    }

    public void setMateria(String materia) {
        this.materia = materia;
    }

    public int getNumero() {
        return numero;
    }

    public void setNumero(int numero) {
        this.numero = numero;
    }

    public double getNota() {
        return nota;
    }

    public void setNota(float nota) {
        this.nota = nota;
    }

    public int getPeso() {
        return peso;
    }

    public void setPeso(int peso) {
        this.peso = peso;
    }
}
