
def main():
	t=int(raw_input());
	for i in xrange(t):
		n,k=map(int,raw_input().split());
		a=map(int,raw_input().split());
		a.append(k);
		m=max(a);
		print nearest_pow(m);

def nearest_pow(n):
	for i in xrange(11):
		if (2**i > n):
			return (i-1);
'''
		for j in xrange(len(a)):
			a[j]=format(a[j],'010b')
		a.append(format(k,'010b'));
		print n,k,a;
'''
main();