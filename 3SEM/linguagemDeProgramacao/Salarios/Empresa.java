package salarios;

import java.util.LinkedList;
import java.util.List;

public class Empresa {

    private List<Funcionario> funcionarios;

    public Empresa(List<Funcionario> funcionarios) {
        this.funcionarios = funcionarios;
    }

    public Empresa() {
        this.funcionarios = new LinkedList<Funcionario>();
    }

    public void addFuncionario(Funcionario funcionario) {
        funcionarios.add(funcionario);
    }

    public void addFuncionarios(List<Funcionario> funcionarios) {
        for(Funcionario funcionario:funcionarios) {
            this.funcionarios.add(funcionario);
        }
    }

    public double calcularSalarioDeGrupo(int ...matriculas) {
        double soma = 0.0;
        for (int matricula: matriculas) {
            for (Funcionario funcionario: funcionarios) {
                if(matricula == funcionario.getMatricula())
                    soma += funcionario.getSalarioLiquido();
            }
        }
        return soma;
    }

    public double calculaTotalSalariosLiquidos() {
        double soma = 0.0;
        for (Funcionario funcionario: funcionarios) {
            soma += funcionario.getSalarioLiquido();
        }
        return soma;
    }

    public List<Funcionario> getFuncionarios() {
        return funcionarios;
    }
}
