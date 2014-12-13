t=int(raw_input());
for i in xrange(t):
	a=raw_input().split();
	a=map(int,a);
	b=a;
	m=min(a);
	if(a.index(m)==0):
		del a[0];
		m=min(a);
		a.insert(0,0);
	x=a.index(m);
	c=[];
	for j in xrange(m+1):
		c.append(str(x));


	num=int("".join(c));
#	print a,m,x,c,num;
	o=b[1];
	z=b[0];
	e=min(o,z);
	f=['1','0']
	for j in xrange(e):
		f.append('0');
	f=int("".join(f));
	mini=min(num,f);
	print mini;
