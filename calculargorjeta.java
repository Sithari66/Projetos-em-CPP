import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
	    
	  System.out.print ("Informe o valor a ser pago: ");
		Scanner in = new Scanner(System.in);
		
		double tax = 0.05;
		double tip = 0.15;
		
		double person = in.nextDouble();
		person = person;
		
	
		double total1 = person* (1+tax+tip);
		System.out.println("\nO valor a ser pago com a gorjeta de 20% e igual a " +total1+ " reais");
	}
}
