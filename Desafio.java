import java.util.Scanner;

public class Desafio {

    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        String nome = "Fulano da Silva";
        String tipoConta = "Conta corrente";
        Double saldoConta = 5000.00;

        System.out.println("Olá " + nome);
        System.out.println("Conta: " + tipoConta);
        System.out.println("Saldo = " + saldoConta);

        System.out.println("\nOperações do Banco\n");
        System.out.println("1-Consultar Saldo");
        System.out.println("2-Receber Valor");
        System.out.println("3-Transferir Valor");
        System.out.println("4-Sair");
        int esc = leitor.nextInt();

        switch (esc) {
            case 1:
                System.out.println("Seu saldo é de " + saldoConta);
                break;

            case 2:
                System.out.println("Quanto você vai receber?");
                Double valorRecebido = leitor.nextDouble();
                Double novoSaldo = (saldoConta + valorRecebido);
                System.out.println("Seu novo saldo é: " + novoSaldo);
                break;

            case 3:
                System.out.println("Quanto você deseja transferir?");
                Double valorTransferir = leitor.nextDouble();
                Double saldoMenos = (saldoConta - valorTransferir);
                System.out.println("Você transferiu R$" + valorTransferir);
                System.out.println("Saldo atual: R$" + saldoMenos);
                break;
        }
    }
}
