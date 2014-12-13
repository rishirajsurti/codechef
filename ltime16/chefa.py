t=int(raw_input());
for i in xrange(t):
	n=int(raw_input());
	a=raw_input().split();
	a=map(int,a);
	a.sort();
	a.reverse();
	sum=0;
	for i in xrange(0,len(a),2):
		sum+=a[i];
	print sum;
	sum=0;
	
