import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		
		Scanner entrada = new Scanner(System.in);
		
		System.out.print("Digite um número: ");
		int num1 = entrada.nextInt();
		
		System.out.print("Digite outro número: ");
		int num2 = entrada.nextInt();
		
		System.out.println("\nOs Resultados dos calculos foram: ");
		System.out.println("\nAdição de " +num1+ " + " +num2+ " = "+(num1+num2));
		System.out.println("Subtração de " +num1+ " + " +num2+ " = "+(num1-num2));
		System.out.println("Multiplicação de " +num1+ " + " +num2+ " = "+(num1*num2));
		System.out.println("Divisão de " +num1+ " + " +num2+ " = "+(num1/num2));
	}
}
