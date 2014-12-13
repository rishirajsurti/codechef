import numpy as np;
import sys;
t=int(raw_input());

def cubemod(a):
	roots=0;
#	print a,a[0],a[1],a[2];
	for i in xrange(a[0],a[1]+1):
		if(( ( (i**3) - 1) % a[2])==0):
			roots+=1;
	return roots;				

def main():
	for i in xrange(t):
		a=raw_input().split();
		a=map(int,a);
		print cubemod(a);
main();