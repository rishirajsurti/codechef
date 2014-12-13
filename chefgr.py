t=int(raw_input());
for i in xrange(t):
	n=raw_input().split();
	n=map(int,n);
	m=n[1];
	n=n[0];
	a=raw_input().split();
	a=map(int,a);
	sum_a=0;
	maxa=max(a);
	for j in xrange(n):
		sum_a+=(maxa-a[j]);
	if(sum_a==m or (m-sum_a)%n==0):
		print 'Yes';
	else:
		print 'No';
		