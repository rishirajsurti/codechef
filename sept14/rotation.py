import numpy as np
def rotc(a,n):
	b=[];
	for i in xrange(len(a)):
		b.append(a[i-n]);
	return b;
def rota(a,n):
	b=list(np.zeros(len(a)));
	b=map(int,b);
	for i in xrange(len(a)):
		b[i-n]=a[i];
	return b;
def main():
	user_input=raw_input().split();
	n=int(user_input[0])
	m=int(user_input[1]);
	a=[];
	a=raw_input().split();
	a=map(int,a);
	for j in xrange(m):
		inp=raw_input().split();
		rc=inp[0];
		print inp;
		num=int(inp[1]);
		if(rc=='R'):
			print a[num-1];
			print a;
		elif(rc=='C'):
			a=rotc(a,num);
			print a;
		else:
			a=rota(a,num);
			print a;


main();
