import math;

def checkpalin(a):
	if(a==a[::-1]):
		return True;
	else:
		return False;

def makepalin(a):
	a=list(a);
	a[len(a)-1]=a[0];
	a=''.join(a);
	for i in xrange(1,len(a)/2):
		l=((len(a)-1)-i);
		if(i<=l):
			print i,l;
#			print a[i],a[l],(float)(int(a[i])+int(a[l]))/2;
			c=math.ceil((float)(int(a[i])+int(a[l]))/2);
					
			c=int(c);
		#	print c, a[i];
			if(c<a[i]):
				c=a[i];
		#	print c;
			c=str(int(c));
			a=list(a);
#			print i,l,a[i],a[l];
			a[i],a[l]=c,c;
#			print i,l,a[i],a[l];
		#	print a;
			a=''.join(a);
		return a;

t=int(raw_input().split()[0]);
for i in xrange(t):
	a=raw_input().split()[0];
	print a;
	if(not(checkpalin(a))):
		a=makepalin(a);
		print int(a);
	else:
		if(len(a)%2==0):
			l=(len(a)/2);
			a=list(a);
			a[l]=str(int(a[l])+1);
			a[l-1]=str(int(a[l-1])+1);
			a=''.join(a);
			print int(a);
		else:
			l=(len(a)/2);
			a=list(a);
			a[l]=str(int(a[l])+1);
			a=''.join(a);
		print int(a);
