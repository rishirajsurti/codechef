import sys;
import math;
mem={1:1, 2:4, 3:4, 4:3, 5:5, 6:7, 7:9};

def main():
	t=(raw_input().split());
	t=int(t[0]);
	m=1;
	x=3;#odd number inputs
	y=2;#even number inputs
	z=2;#index variable
	w=1;#for 2 power w
	
	for i in xrange(t):
		m=1;
		uinput=raw_input();
		for j in xrange(int(len(uinput))):
			if(uinput[j]=='l'):
				m=2*m;
			else:
				m=((2*m)+1);

			if m in mem:
				m=m;				
			else:
				while(z<=m):
			#		print z,m,w;
					if(w%2!=0):
						for k in xrange(int(2**w)):
							mem[z]=y;
							z+=1;
							y+=2;
					if(w%2==0):
						for k in xrange(int(2**w)):
							mem[z]=x;
							z+=1;
							x+=2;
					w+=1;
			
		print mem[m];

#			print m


main();


