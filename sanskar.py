def main():
	t=int(raw_input());
	for i in xrange(t):
		n,k=map(int,raw_input().split());
		s=map(int,raw_input().split());
		s.sort();
		s_max=max(s);
		a=map(int,zeros(k));
				
main();