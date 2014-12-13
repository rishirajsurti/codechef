def rotc(a,n):
	b=[];
	for i in xrange(len(a)):
		b[i]=b[i-n];
	return b;




a=[1,2,3,4,5];
rotc(a,3);