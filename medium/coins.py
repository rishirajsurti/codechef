mem={0:0};
def main(n):
	if n in mem:
		return mem[n];
	else:
		mem[n]=max(n,main(n/2)+main(n/3)+main(n/4));
		return mem[n];

while True:
	try:
		print main(int(raw_input()));
	except:
		break;