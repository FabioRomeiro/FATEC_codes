package data;

import java.util.List;

public class Precipitacao {
    public static List<Precipitacao> todasPrecipitacoes;
    private double volume;
    private Data data;

    public Precipitacao(double volume, Data data) {
        this.volume = volume;
        this.data = data;
        Precipitacao.todasPrecipitacoes.add(this);
    }

    public double getVolume() {
        return volume;
    }

    public void setVolume(double volume) {
        this.volume = volume;
    }

    public Data getData() {
        return data;
    }

    public void setData(Data data) {
        this.data = data;
    }

    public static double[] calculaTotalPorMes() {
        double somas[] = new double[12];
        for (int i = 0; i < 12; i++) {
            double soma = 0;
            for (Precipitacao precipitacao: todasPrecipitacoes) {
                soma += precipitacao.getVolume();
            }
            somas[i] = soma;
        }
        return somas;
    }
}
