def f(d):
	x=1;
#	print d;
	for i in xrange(1,len(d)):
		if(d[i]!=d[i-1]):
			x+=1;
#			print x;
	print x;

def mod(e,l,r):
	b=[];
#	print l,r, e[l],e[r];
	for i in xrange(r-l):
		b.append(e[l]);
		del e[l];
#		print b;
#		print e;
	e=(b+e);
#	print e;
	return e;

t=int(raw_input());
for i in xrange(t):
	n=int(raw_input());
	a=raw_input().split();
	a=map(int,a);
	m=int(raw_input());
	for j in xrange(m):
		q=raw_input().split();
		q=map(int,q);
		l=q[1];
		r=q[2];
#		print q;
		if(q[0]==1):
			c=a[(l-1):r];
#			print c;
			f(c);
		if(q[0]==2):
			a=mod(a,(l-1),(r));


