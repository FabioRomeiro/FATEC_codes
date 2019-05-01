package salarios;

import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;

public class ContabilTeste {

    public static void main(String[] args) {
        Empresa fabioInc = new Empresa();

        List<Funcionario> funcionarios = new LinkedList<>(
                Arrays.asList(
                        new Funcionario(1,"Fabio Lucas", 2134.54),
                        new Funcionario(2,"Ana Carolina", 8762.12),
                        new Funcionario(3,"Sueli Castro", 987.51),
                        new Funcionario(4,"Andre Alexandre", 401.56),
                        new Funcionario(5,"Matias João", 6515.87),
                        new Funcionario(6,"Lucas Inca", 5351.52),
                        new Funcionario(7,"Rodrigo Mailson", 620.34),
                        new Funcionario(8,"Rodisnei Kleber", 987.04),
                        new Funcionario(9,"Antonio Piva", 2321.50),
                        new Funcionario(10,"Leonardo Moura", 891.98),
                        new Funcionario(11,"Joaquim Fenix", 642.32),
                        new Funcionario(12,"Rita Rocha", 211.21),
                        new Funcionario(13,"Paulo Hoquei", 7888.55),
                        new Funcionario(14,"Claudo Marista", 2212.46),
                        new Funcionario(15,"Urbano Romeiro", 7985.87)
                )
        );
        fabioInc.addFuncionarios(funcionarios);

        System.out.println("Total a pagar num grupo de 10 funcionarios: R$" + fabioInc.calcularSalarioDeGrupo(
                14,9,12,13,8,5,1,3,4,7
        ));

        for (Funcionario funcionario: fabioInc.getFuncionarios()) {
            System.out.println("Matricula: " + funcionario.getMatricula());
            System.out.println("Nome: " + funcionario.getNome());
            System.out.println("Salário Bruto: " + funcionario.getSalarioBruto());
            System.out.println("Salário Liquido: " + String.format("%.2f", funcionario.getSalarioLiquido()));
            System.out.println();
        }

        System.out.println("Total a pagar para a empresa toda: R$" + String.format("%.2f",fabioInc.calculaTotalSalariosLiquidos()));
    }
}
