import java.math.BigInteger;
import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while(sc.hasNextInt()) {
			int n=sc.nextInt();
			BigInteger result = BigInteger.valueOf(1);

		    for (long factor = 2; factor <= n; factor++) {
		        result = result.multiply(BigInteger.valueOf(factor));
		    }
            
		    System.out.printf("%d!\n",n);
		    System.out.printf("%s\n",result);
		}

	}

}
