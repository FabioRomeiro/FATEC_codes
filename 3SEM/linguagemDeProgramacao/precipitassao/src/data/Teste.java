package data;

public class Teste {
    public static void main(String[] args) {
        new Precipitacao(2.0, new Data(02,12,2012));
        new Precipitacao(2.0, new Data(03,12,2012));
        for(double soma:Precipitacao.calculaTotalPorMes())
            System.out.println(soma);
    }
}
