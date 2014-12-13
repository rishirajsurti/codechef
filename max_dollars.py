mem={0:0};

def main(n):
	n1=n/2;
	n2=n/3;
	n3=n/4;
	if n in mem:
		return mem[n];
	else:
		n1=max(n1,main(n1));
		n2=max(n2,main(n2));
		n3=max(n3,main(n3));		
		mem[n]=max(n,n1+n2+n3);
		return mem[n];


while True:
	try:
		print main(int(raw_input()));
	except:
		break;
