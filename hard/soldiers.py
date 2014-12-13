t=int(raw_input());
for i in xrange(t):
	n=int(raw_input());
	a=raw_input().split();
	a=map(int,a);
	#print n,a, type(n),type(a[0]);
	b=range(1,n+1,1);
	#print b;

	for i in xrange(1,len(a)):
		if(a[i]!=0):
			x=a[i];
			y=b[i];
			b.remove(y);
			b.insert(i-x,y);
	for j in xrange(len(b)):
		print b[j],
	print;

