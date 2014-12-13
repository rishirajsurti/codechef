import numpy

def main():
	t=int(raw_input());
	
	for i in xrange(t):
		a=[];
		b=[];
		n=int(raw_input());
		user_input=raw_input().split();
		for j in xrange(n):
			a.append(user_input[j]);
		a.sort();
#		print a;
		
		for j in xrange(len(a)):
			b.append(a.count(a[j]));
#		print b;
		c=int(max(b));
		d=int(b.index(c));
		e=int(a[d]);	
		print("%d %d") % (e,c)
	#	print a;
	return 0;
main();