import java.util.Random;

public class Main{
	
	public static void main(String[] args) {
		
		Random num = new Random();
		
		//Int
		
		System.out.println("Número Aleatório 0 - gerado: "+num.nextInt());
		System.out.println("Número Aleatório 1 - gerado: "+num.nextInt());

		//Double
		
		System.out.println("\nNúmero Aleatório 2 - gerado: "+num.nextDouble());
		System.out.println("Número Aleatório 3 - gerado: "+num.nextDouble());

        //Com intervalo	definido	
		System.out.println("\nNúmero Aleatório 4 - gerado: "+num.nextInt(10));
		System.out.println("Número Aleatório 5 - gerado: "+num.nextInt(20));

		Random rand = new Random(20L);
	
		System.out.println("Número Aleatório 0 - gerado: "+rand.nextInt(100));
		System.out.println("Número Aleatório 1 - gerado: "+rand.nextInt(100));		
	}

}
