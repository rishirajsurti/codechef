def main():
	user_input=raw_input().split();
	a=int(user_input[0]);
	b=int(user_input[1]);
	if(a>b):
		n=a-b;
	else:
		n=b-a;
	m=bin(n);
	o=m[2:]
	o=str(o)	
	l=list(o)
	p=l[len(l)-1]
	p=int(p)
	if(p==0):
		l[len(l)-1]=1;
	else:
		l[len(l)-1]=0;

	l[len(l)-1]=str(l[len(l)-1])
	d=""
	q=d.join(l);
	print int(q,2);

main()