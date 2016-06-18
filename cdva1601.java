import java.util.Scanner;
import javax.script.ScriptEngineManager;
import javax.script.ScriptEngine;

class Main{
	public static void main(String[] args) throws Exception{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		int[] a = new int[10005];
		char[] op = new char[5];
		op[1] = '/';
		op[2] = '*';
		op[3] = '+';
		op[4] = '-';
		ScriptEngineManager mgr = new ScriptEngineManager();
		ScriptEngine engine = mgr.getEngineByName("JavaScript");
		
		while(t-- > 0){
			int n = sc.nextInt();
			int i;
			for(i=0; i<n; i++)
				a[i] = sc.nextInt();

			String expr = "";
			int iter = 1, count;
			for(i=0; i<n; i++)
				expr = expr + "(";

			for(i=0; i<n-1; ){
				if(iter%4==1){
					count = 1;
					while(count <= 4 && i < n-1)
						expr = expr+a[i++]+")"+op[count++];
				}
				else if(iter%4==2){
					count =2;
					while(count<=4 && i < n-1)
						expr = expr+a[i++]+")"+op[count++];

					if(i<n-1)
						expr = expr + a[i++]+")" + op[1];
				}
				else if(iter%4==3){
					count = 3;
					while(count <= 4 && i < n-1)
						expr = expr + a[i++]+")" + op[count++];
					if(i < n-1)
						expr = expr + a[i++]+")" + op[1];
					if(i < n-1)
						expr = expr + a[i++]+")" + op[2];
				}
				else if(iter%4 == 0){
					count = 4;
					while(count>=1 && i<n-1)
						expr = expr + a[i++]+")" + op[count--];

				}
				iter++;
			}
			expr = expr + a[n-1]+")";
			double ans = (double)engine.eval(expr);
			int ansint = (int)ans;
	//		System.out.println(expr);
			System.out.println(ansint);
		}

		
		
		

		/*String foo = "40+2*8"+"-32";
		System.out.println(engine.eval(foo));
		double b = (double)engine.eval(foo);
		
		System.out.println(b);

		int aint = (int) b;
		System.out.println(aint);
*/
	}
}