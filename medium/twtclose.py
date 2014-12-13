import math
import numpy as np
def main():
	user_input=raw_input().split();
	n=int(user_input[0]);
	k=int(user_input[1]);
	a=list(np.zeros(k+1));
	a=map(int,a);
	for i in xrange(k):
		b=raw_input().split();
		if(b[0]=='CLOSEALL'):
			a=list(np.zeros(k+1));
			a=map(int,a);
		else:
			c=b[1];
			d=int(c);
			if(a[d]==0):
				a[d]=1;
			else:
				a[d]=0;
		print a.count(1);	

main();