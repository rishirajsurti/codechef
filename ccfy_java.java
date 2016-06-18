import java.util.Scanner;
import java.math.BigInteger;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		BigInteger N = sc.nextBigInteger();


		while(N.compareTo(BigInteger.valueOf(0)) > 0)
		{
		BigInteger N2 = N.add(BigInteger.valueOf(-1));
		BigInteger i,j;

		BigInteger rows = BigInteger.ZERO;

		for(i= BigInteger.valueOf(1); N2.compareTo(i) >= 0; i = i.add(BigInteger.valueOf(1))) {
	//	for(BigInteger i = BigInteger.ONE; i.compareTo(N) <= 0; i = i.add())	
//			System.out.println(i);

	//		BigInteger ii = i.add(BigInteger.valueOf(1));
			for(j=i.add(BigInteger.ONE); N.compareTo(j) >= 0; j = j.add(BigInteger.valueOf(1))){
				//System.out.println("hey there");
				rows = rows.add(i.gcd(j));
			
			}
		}
		System.out.println(rows);
		N = sc.nextBigInteger();			
		}
		/*while(N-- > 0){
			BigInteger p = sc.nextBigInteger();
			String ch = sc.next();
			BigInteger q = sc.nextBigInteger();
			BigInteger gcd_pq = p.gcd(q); // wow :))))))))
			System.out.println(p.divide(gcd_pq) + " / " + q.divide(gcd_pq));
		}*/
	}
}