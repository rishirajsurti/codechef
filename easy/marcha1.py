#import psyco
import sys
def main():
	t=raw_input();
	t=int(t);
	check=0;
	for i in xrange(0,t,1):
		user_input=raw_input().split();
		n=int(user_input[0]);
		m=int(user_input[1]);
		sum=0;
		a=[]
		for i in xrange(0,n,1):
			k=input();
			if(k<=m):
				a.append(k);
			a.sort();	
			#print a
		n=int(len(a));
		p=2**n;
		for i in xrange(0,p,1):
			b=bin(i);
			b='0b'+(b[2:]).zfill(n);
			
			for j in xrange(0,n,1):
				c=bin(1<<j);
				c='0b'+(c[2:]).zfill(n);
				c=bin(int(b,2) & int(c,2));
	#			print b+" "+c+" ";
				d=int(c[2]);
				if(d==1):
					sum+=a[len(a)-1-j];
				if(sum==m):
					break;
					#print sum;

			if(sum==m):
				print "Yes";
				check=1;
				break;
			sum=0;
		if(check==0):
			print "No"
		check=0;
main()