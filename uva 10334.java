import java.math.BigInteger;
import java.util.*;
public class Main {

	public static void main(String[] args) {
		BigInteger ob[] = new BigInteger[1002];
		Scanner sc = new Scanner(System.in);
		int i;
		ob[0]=BigInteger.ONE;
		ob[1]=BigInteger.ONE.add(BigInteger.ONE);
		for(i=2;i<1002;i++) {
			ob[i]=ob[i-1].add(ob[i-2]);
		}
		int n;
		while(sc.hasNextInt()) {
			n=sc.nextInt();
			System.out.println(ob[n]);
		}

	}

}
