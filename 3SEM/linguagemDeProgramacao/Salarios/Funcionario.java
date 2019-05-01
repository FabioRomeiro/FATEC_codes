package salarios;

public class Funcionario {

    private int matricula;
    private String nome;
    private double salarioBruto;
    private double salarioLiquido;

    public Funcionario(int matricula, String nome, double salarioBruto) {
        this.matricula = matricula;
        this.nome = nome;
        this.salarioBruto = salarioBruto;
        this.calculaLiquido();
    }

    private void calculaLiquido() {
        if (salarioBruto > 1500.0) {
            this.salarioLiquido = salarioBruto - (salarioBruto * 0.095);
        } else {
            this.salarioLiquido = salarioBruto - (salarioBruto * 0.06);
        }
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

    public double getSalarioBruto() {
        return salarioBruto;
    }

    public void setSalarioBruto(double salarioBruto) {
        this.salarioBruto = salarioBruto;
        this.calculaLiquido();
    }

    public double getSalarioLiquido() {
        return salarioLiquido;
    }
}
