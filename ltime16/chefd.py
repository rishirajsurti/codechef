def f(d,l,r,p):
	l=l-1;
	for i in xrange(l,r):
		if(d[i]%p==0):
			d[i]=(d[i]/p);
#		print d;
	
	return d;

def mod(e,l,r):
#	print e,l,r;
	e[l-1]=r;
#	print e;
	return e;


n=int(raw_input());
a=raw_input().split();
a=map(int,a);
m=int(raw_input());
for j in xrange(m):
	q=raw_input().split();
	q=map(int,q);
	if(q[0]==1):
		a=f(a,q[1],q[2],q[3]);
	if(q[0]==2):
		a=mod(a,q[1],q[2]);
for i in xrange(len(a)):
	print a[i],