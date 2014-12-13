import sys
def main():
	t=raw_input();
	t=int(t);
	for i in xrange(t):
		p=int(raw_input());
		c=p/2048
		d=(p%2048);
		b=bin(d);
		ones=b.count('1');
		print (c+ones);

	
main();