def main():
	t=int(raw_input());
	for i in xrange(t):
		n=int(raw_input());
		a=raw_input().split();
		a=map(int,a);
		a.sort();
		count=1;
		for j in xrange(len(a)-1):
			if(a[j]!=a[j+1]):
				count+=1;
		print count;
main();
